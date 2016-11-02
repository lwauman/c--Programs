#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <psapi.h>

using namespace std;
const CHAR gameName[] = "Hotline Miami"; //very very naughty global variables. will change later
const CHAR oneWordOfGame[] = "Hotline";

HANDLE getProcessHandle(DWORD pid) {
	return OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, 0, pid);
}

DWORD getModuleHandle(DWORD pid) {
	HMODULE hMods[1024];
	HANDLE hProcess = getProcessHandle(pid);
	DWORD cbNeeded;
	unsigned int i;
	
	if (EnumProcessModules(hProcess, hMods, sizeof(hMods), &cbNeeded)) {
		for (i = 0; i < (cbNeeded / sizeof(HMODULE)); i++) {
			CHAR szModName[MAX_PATH];
			if (GetModuleFileNameEx(hProcess, hMods[i], szModName, sizeof(szModName) / sizeof(TCHAR))) {
				if (strstr(szModName, oneWordOfGame)) {
					CloseHandle(hProcess);
					return (DWORD)hMods[i];
				}
			}
		}
	}
}

DWORD getFinalAddress(DWORD baseAddress) {
	DWORD offSets[3] = { 0xBFFCD8, 0x29C, 0x168 };
	for (DWORD val : offSets) {
		cout << val << endl;
	}
}

int main(){
	DWORD pid;
	HWND wHand;
	DWORD address = 0x04A8B518;
	DWORD toAdd1 = 0xBFFCD8;
	int myX;

	wHand = FindWindow(NULL, gameName);
	if (!wHand) {
		cout << "Unable to find window." << endl;
		cin.get();
	}
	else {
		//window found
		//puts process ID into the address &pid
		GetWindowThreadProcessId(wHand, &pid);
		HANDLE processHand = getProcessHandle(pid);
		if (!processHand) {
			//process handle invalid
			cout << "Unable to get process handle.";
			cin.get();
		}
		else {
			//process handle valid

			address = getFinalAddress(getModuleHandle(pid));
			while (1) {
				cin.get();
				ReadProcessMemory(processHand, (void*)address, &myX, sizeof(myX), 0);
				cout << myX << endl;
				Sleep(1000);
			}
		}
	}
}