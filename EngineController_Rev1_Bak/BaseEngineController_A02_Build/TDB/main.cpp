// database.cpp : Defines the entry point for the DLL application.
//

#include <windows.h>
#include "TDBDefn.h"

HANDLE hDllInst;

extern "C" DB_info Database;
extern "C" DWORD FAR PASCAL GetProjectData();


BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
	if(ul_reason_for_call == DLL_PROCESS_ATTACH) 
	{
		if(!hDllInst) 
		{
			hDllInst = hModule;
		}
	}
	return TRUE;
}

DWORD FAR PASCAL GetProjectData()
{
	return (DWORD) &Database;
}
