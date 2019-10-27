#include <shlwapi.h>
#include "..\ME2-SDK\ME3TweaksHeader.h"
//#include "..\ME2-SDK\SdkHeaders.h"
#include <chrono>
#include <thread>
#include <functional>
#include "../detours/detours.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

ME3TweaksASILogger logger("Ace Slammer v1", "AceSlammer.txt");

bool fetchNextItem = false;

const int NEXTSTATE_SLAMMING = 1;
const int NEXTSTATE_ZEROG = 2;
const int NEXTSTATE_UPGRAV = 3;
const int NEXTSTATE_NORMAL = 4;
int nextState = NEXTSTATE_UPGRAV;

void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	//if (fetchNextItem) {
	char* szName = pFunction->GetFullName();
	if (fetchNextItem && strcmp(szName, "Function Engine.PlayerController.PlayerTick") == 0)
		//if (strcmp(szName, "Function SFXGame.BioPlayerController.PlayerTick") == 0)
	{
		logger.writeToLog(string_format("%s\n", szName), true);
		bool nextStateSet = false;
		ABioPlayerController* bpc = reinterpret_cast<ABioPlayerController*>(pObject);
		if (!nextStateSet && nextState == NEXTSTATE_SLAMMING)
		{
			bpc->CheatManager->SetGravity(-5900);
			nextState = NEXTSTATE_NORMAL;
			nextStateSet = true;
		}
		if (!nextStateSet && nextState == NEXTSTATE_NORMAL)
		{
			bpc->CheatManager->SetGravity(-981);
			//bpc ->WorldInfo->WorldGravityZ = -981;
			nextState = NEXTSTATE_UPGRAV;
			nextStateSet = true;
		}
		if (!nextStateSet && nextState == NEXTSTATE_ZEROG)
		{
			bpc->CheatManager->SetGravity(3);
			//bpc->WorldInfo->WorldGravityZ = 3; //just slightly up
			nextState = NEXTSTATE_SLAMMING;
			nextStateSet = true;
		}
		if (!nextStateSet && nextState == NEXTSTATE_UPGRAV)
		{
			bpc->CheatManager->SetGravity(1800);

			//bpc->WorldInfo->WorldGravityZ = 500;
			nextState = NEXTSTATE_ZEROG;
			nextStateSet = true;
		}

		logger.writeToLog(string_format("GRAVITY: %f\n", bpc->WorldInfo->WorldGravityZ), true);
		//logger.writeToConsoleOnly(string_format("Default gravity: %f", wi->DefaultGravityZ), true);
		//logger.writeToLog(string_format("%s", szName), true);
		fetchNextItem = false;
	}
	ProcessEvent(pObject, pFunction, pParms, pResult);
}

void timer_start(function<unsigned(void)> func, unsigned int interval)
{
	std::thread([func, interval]() {
		while (true)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(func()));
		}
		}).detach();
}


unsigned test()
{
	unsigned nextInterval = 100; //default 100ms
	if (nextState == NEXTSTATE_SLAMMING)
	{
		nextInterval = 2200;
	}
	if (nextState == NEXTSTATE_NORMAL)
	{
		nextInterval = 8000;
	}
	if (nextState == NEXTSTATE_ZEROG)
	{
		nextInterval = 2400;
	}
	if (nextState == NEXTSTATE_UPGRAV)
	{
		nextInterval = 450;
	}
	fetchNextItem = true;
	return nextInterval;
}


void onAttach()
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread()); //This command set the current working thread to the game current thread.
	DetourAttach(&(PVOID&)ProcessEvent, HookedPE); //This command will start your Hook.
	DetourTransactionCommit();
	std::this_thread::sleep_for(std::chrono::milliseconds(10000));
	timer_start(test, 1000);
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
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

