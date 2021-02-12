#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <shlwapi.h>

#include "..\ME2-SDK\ME3TweaksHeader.h"
#include "..\detours\detours.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

//ME3TweaksASILogger logger("Kismet Logger v1 for ME2", "KismetLog.txt");

int numDeaths = 0;

void UpdateDeathCount()
{
	numDeaths++;

	std::ofstream ofile;
	ofile.open("deathcount.txt");
	if (ofile.is_open())
	{
		ofile << numDeaths;
		ofile.close();
	}
}

void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	const char* szName = pFunction->GetFullName();
	if (isPartOf(szName, "Function SFXGame.BioSPGame.SpawnGameOverGUI")) {
		UpdateDeathCount();
	}
	ProcessEvent(pObject, pFunction, pParms, pResult);
}

void ReadDeathCount()
{
	try {
		string line;
		ifstream myfile("deathcount.txt");
		if (myfile.is_open())
		{
			getline(myfile, line);
			myfile.close();
			numDeaths = stoi(line);
		}
	}
	catch (int error) {
		// Don't care at all
	}
}

void onAttach()
{
	ReadDeathCount();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread()); //This command set the current working thread to the game current thread.
	DetourAttach(&(PVOID&)ProcessEvent, HookedPE); //This command will start your Hook.
	DetourTransactionCommit();
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

