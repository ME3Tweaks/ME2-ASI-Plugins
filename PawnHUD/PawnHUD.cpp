#include <string>
#include <sstream>
#include <shlwapi.h>
#include <psapi.h>

#include "..\ME2-SDK\ME3TweaksHeader.h"
#include "..\detours\detours.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

static void RenderTextSLH(std::wstring msg, const float x, const float y, const char r, const char g, const char b, const float alpha, UCanvas* can)
{
	can->SetDrawColor(r, g, b, alpha * 255);
	can->SetPos(x, y + 64); //+ is Y start. To prevent overlay on top of the power bar thing
	can->DrawText(FString(msg.data()), 1, 1.0f, 1.0f);
}

void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	const char* funcName = pFunction->GetFullName();
	if (strcmp(funcName, "Function SFXGame.BioHUD.PostRender") == 0)
	{

		//auto biopawns = FindObjectsOfType(ABioPawn::StaticClass());
		ABioHUD* const hud = dynamic_cast<ABioHUD*>(pObject);
		if (hud->WorldInfo && hud->WorldInfo->PawnList) {
			auto pawn = hud->WorldInfo->PawnList;
			for (int i = 0; pawn; i++)
			{
				//ABioPawn* biopawn = (ABioPawn*)pawn;
				if (pawn->IsDead())
				{
					int r = 255;
					int g = 25;
					int b = 25;
					RenderTextSLH(s2ws(string_format("Dead: %s", pawn->GetName())), 5.0f, 12 * i, r, g, b, 1, hud->Canvas);
				}
				else
				{
					int r = 25;
					int g = 255;
					int b = 25;
					RenderTextSLH(s2ws(string_format("Alive: %s", pawn->GetName())), 5.0f, 12 * i, r, g, b, 1, hud->Canvas);
				}
				pawn = pawn->NextPawn;
			}
		}
	}

	//}
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

