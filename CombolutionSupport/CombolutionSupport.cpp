#include <string>
#include <sstream>
#include <shlwapi.h>
#include <psapi.h>

#include "..\detours\detours.h"
#include "CBLstuff.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

#define DEVMODE 0
#define MAXDISPLAYMODE 3
#define MAXFRAMECOUNT 30

bool canToggleS = true;
bool canToggleA = true;
int displayMode = 1;
bool activeMod = false;
int frameCount = 0;

int shared_coold = 0;
wstring xcom = L"no-command";
wstring xstr1 = L"cooldown_s";
wstring xstr2 = L"cooldown_i";
struct PowerCooldown p_cool[50];
bool p_cool_init = false;

void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	const char* funcName = pFunction->GetFullName();
	
	// switch between shared and individual cooldown via console
	if (isPartOf(funcName, "Console.Typing.InputChar") && IsA<USFXConsole>(pObject))
	{
		auto inputCharParams = static_cast<UConsole_execInputChar_Parms*>(pParms);
		if (inputCharParams->Unicode.Count >= 1 && inputCharParams->Unicode(0) == '\r')
		{
			xcom = L"unk-command";
			auto console = static_cast<USFXConsole*>(pObject);
			wstringstream command;
			command << console->TypedStr;
			xcom = command.str();

			if(!xstr1.compare(xcom))	{shared_coold = 1;}
			else if(!xstr2.compare(xcom))	{shared_coold = 0;}
		}
	}

	// check power scripts and cooldown, and fix if necessary
	else if (strcmp(funcName, "Function SFXGame.BioHUD.PostRender") == 0)
	{
		if (!p_cool_init)
		{
			p_cool_init = init_PowerCooldown(p_cool);
		}
		
		if (DEVMODE)
		{
			if (Check_Ctrl_Key('S', &canToggleS))
			{
				displayMode++;
				if (displayMode > MAXDISPLAYMODE)displayMode = 0;
			}
			if (Check_Ctrl_Key('A', &canToggleA))
			{
				activeMod = !activeMod;
			}
		}
		else
		{
			displayMode = 0;
			activeMod = 1;
		}

		frameCount++;
		if (displayMode>0 || frameCount>=MAXFRAMECOUNT)
		{
			auto SFXPow = get_SFXPowers();
			struct PowerInfo* p_info;
			p_info = (struct PowerInfo*)calloc(SFXPow.Count, sizeof(struct PowerInfo));
			bool onCooldown = get_PowerInfo(SFXPow, p_info);

			if (activeMod && !onCooldown)
			{
				set_SFXPowers_cooldown(SFXPow, p_info, p_cool, shared_coold);
				CBL_fix(SFXPow, p_info, "Warp");
				CBL_fix(SFXPow, p_info, "Reave");
				CBL_fix(SFXPow, p_info, "Throw");
				CBL_fix(SFXPow, p_info, "Singularity");
				CBL_fix(SFXPow, p_info, "SingularityLiara");
				CBL_fix(SFXPow, p_info, "Shockwave");
			}

			const auto hud = static_cast<ABioHUD*>(pObject);
			if (displayMode > 0 && hud->WorldInfo)
			{
				int yIndex = 1;
				if (activeMod)
				{
					RenderTextSLH(s2ws("----- CBL modifications ACTIVE -----"), 500.0f, yIndex * 12.0f, 0, 255, 0, 1.0, hud->Canvas);
				}
				else
				{
					RenderTextSLH(s2ws("----- CBL modifications INACTIVE -----"), 500.0f, yIndex * 12.0f, 255, 0, 0, 1.0, hud->Canvas);
				}
				yIndex++;
				RenderTextSLH(xcom, 500.0f, yIndex * 12.0f, 255, 0, 255, 1.0, hud->Canvas);
				yIndex += 3;
				yIndex = display_SFXPowers(SFXPow, p_info, yIndex, hud, displayMode);
				auto BioPow = get_BioPowers();
				yIndex = display_BioPowers(BioPow, yIndex, hud, displayMode);
				//auto BioPSc = get_BioPowerScripts();
				//yIndex = display_BioPowerScripts(BioPSc, yIndex, hud, displayMode);
			}

			frameCount = 0;
			free(p_info);
			p_info = nullptr;
		}
	}

	ProcessEvent(pObject, pFunction, pParms, pResult);
}


void onAttach()
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread()); //This command set the current working thread to the game current thread.
	DetourAttach(&(PVOID&)ProcessEvent, HookedPE); //This command will start your Hook.
	DetourTransactionCommit();
}

bool WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, NULL, 0, NULL);
		return true;
		break;

	case DLL_PROCESS_DETACH:
		return true;
		break;
	}
	return true;
};

