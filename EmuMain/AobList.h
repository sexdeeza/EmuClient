#ifndef __AOB_LIST_H__
#define __AOB_LIST_H__

#include<Windows.h>
#include<string>

// RemoveHackShield
std::wstring AOB_HackShield_Init[] = {
	// v164.0
	L"55 8B EC 81 EC ?? ?? ?? ?? 53 8B D9 83 7B 10 00 0F 85 ?? ?? ?? ?? E8 ?? ?? ?? ?? 85 C0 74",
	// v186.1
	L"55 8B EC 81 EC ?? ?? ?? ?? 53 8B D9 8D 4B ?? 89 4D ?? E8 ?? ?? ?? ?? 85 C0 0F 85 ?? ?? ?? ?? E8 ?? ?? ?? ?? 85 C0",
	// v302.0
	L"81 EC 20 01 00 00 A1 ?? ?? ?? ?? 33 C4 89 84 24 1C 01 00 00 55 57 8B F9 8D 6F 18 8B CD E8",
};

std::wstring AOB_EHSvc_Loader_1[] = {
	// v186.1
	L"55 8B EC 81 EC ?? ?? ?? ?? 57 C7 45 ?? 00 00 00 00 C6 85 ?? ?? ?? ?? 00 B9 ?? ?? ?? ?? 33 C0 8D BD ?? ?? ?? ?? F3 AB",
};

std::wstring AOB_EHSvc_Loader_2[] = {
	// v164.0
	L"55 8B EC 81 EC ?? ?? ?? ?? 57 C7 45 ?? 00 00 00 00 C7 45 ?? 00 00 00 00 C6 85 ?? ?? ?? ?? 00 B9 82 00 00 00 33 C0 8D BD ?? ?? ?? ?? F3 AB C7 45 ?? 00 00 00 00 90 E8 ?? ?? ?? ?? 50 E8",
	// v164.0 call nop
	L"55 8B EC 81 EC ?? ?? ?? ?? 57 C7 45 ?? 00 00 00 00 C7 45 ?? 00 00 00 00 C6 85 ?? ?? ?? ?? 00 B9 82 00 00 00 33 C0 8D BD ?? ?? ?? ?? F3 AB C7 45 ?? 00 00 00 00 E8 ?? ?? ?? ?? 90 50 E8",
	// v186.1
	L"55 8B EC 81 EC ?? ?? ?? ?? 57 C7 45 ?? 00 00 00 00 C7 45 ?? 00 00 00 00 C7 45 ?? 00 00 00 00 C6 85 ?? ?? ?? ?? 00 B9 ?? ?? ?? ?? 33 C0 8D BD ?? ?? ?? ?? F3 AB",
};

std::wstring AOB_HeartBeat[] = {
	// v186.1
	L"B8 ?? ?? ?? ?? E8 ?? ?? ?? ?? 81 EC ?? ?? ?? ?? 56 BE ?? ?? ?? ?? 56 8D 85 ?? ?? ?? ?? 6A 00 50 E8",
};

std::wstring AOB_MKD25tray[] = {
	// v164.0
	L"55 8B EC 83 EC 0C 56 8B F1 83 7E 18 00 0F 85 ?? ?? ?? ?? 83 65 FC 00 8D 45 FC 50 90 E8 ?? ?? ?? ?? 83 7D FC 00 59",
	// v164.0 call nop
	L"55 8B EC 83 EC 0C 56 8B F1 83 7E 18 00 0F 85 ?? ?? ?? ?? 83 65 FC 00 8D 45 FC 50 E8 ?? ?? ?? ?? 90 83 7D FC 00 59",
	// v176.0
	L"55 8B EC 83 EC 0C 56 8B F1 83 7E 18 00 0F 85 ?? ?? ?? ?? 83 65 FC 00 8D 45 FC 50 FF 15",
	// v186.1
	L"55 8B EC 83 EC ?? 56 8B F1 57 8D 7E ?? 8B CF E8 ?? ?? ?? ?? 85 C0 0F 85",
	// v302.0
	L"83 EC 0C 56 8B F1 57 8D 7E 30 8B CF E8 ?? ?? ?? ?? 85 C0 0F 85 A1 00 00 00 89 44 24 08 8D 44 24 08 50 FF 15",

};

std::wstring AOB_Autoup[] = {
	// v164.0
	L"56 8B F1 83 7E 14 00 74 16 68 ?? ?? ?? ?? 68 80 00 00 00 90 E8 ?? ?? ?? ?? 83 66 14 00 59 59 5E C3",
	// v164.0 call nop
	L"56 8B F1 83 7E 14 00 74 16 68 ?? ?? ?? ?? 68 80 00 00 00 E8 ?? ?? ?? ?? 90 83 66 14 00 59 59 5E C3",
	// v176.0
	L"56 8B F1 83 7E 14 00 74 ?? 68 ?? ?? ?? ?? 68 80 00 00 00 FF 15",
	// v186.1
	L"56 8D 71 ?? 8B CE E8 ?? ?? ?? ?? 85 C0 74 ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? FF 15",
	// v302.0
	L"6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 83 EC 0C 55 56 57 A1 ?? ?? ?? ?? 33 C4 50 8D 44 24 1C 64 A3 00 00 00 00 8B F1 89 74 24 10 C7 06 ?? ?? ?? ?? 8D 7E 18 8B CF C7 44 24 24 07 00 00 00 E8",
};

std::wstring AOB_ASPLunchr[] = {
	// v164.0
	L"55 8B EC 83 EC 0C 56 8B F1 83 7E 14 00 75 ?? 68 ?? ?? ?? ?? 90 E8",
	// v164.0 call nop
	L"55 8B EC 83 EC 0C 56 8B F1 83 7E 14 00 75 ?? 68 ?? ?? ?? ?? E8 ?? ?? ?? ?? 90",
	// v176.0
	L"55 8B EC 83 EC 0C 56 8B F1 83 7E 14 00 75 ?? 68 ?? ?? ?? ?? FF 15",
	// v186.1
	L"55 8B EC 83 EC ?? 56 8B F1 57 8D 7E ?? 8B CF E8 ?? ?? ?? ?? 85 C0 75 ?? 68 ?? ?? ?? ?? FF 15",
	// v302.0
	L"83 EC 0C 56 8B F1 57 8D 7E 24 8B CF E8 ?? ?? ?? ?? 85 C0 75 5B 68 ?? ?? ?? ?? FF 15",
};

std::wstring AOB_HSUpdate[] = {
	// v164.0
	L"55 8B EC 81 EC ?? ?? ?? ?? 53 8B D9 83 7B 0C 00 56 57 0F 85 ?? ?? ?? ?? 8A 15",
	// v180.1
	L"55 8B EC 81 EC ?? ?? ?? ?? 53 56 8D 59 ?? 57 8B CB E8 ?? ?? ?? ?? 85 C0 0F 85 ?? ?? ?? ?? 8A 15",
	// v186.1
	L"B8 ?? ?? ?? ?? E8 ?? ?? ?? ?? 81 EC ?? ?? ?? ?? 56 83 C1 ?? 57 89 4D ?? E8 ?? ?? ?? ?? 85 C0 0F 85",
	// v187.0
	L"B8 ?? ?? ?? ?? E8 ?? ?? ?? ?? 81 EC ?? ?? ?? ?? 53 56 83 C1 ?? 57 89 4D ?? E8 ?? ?? ?? ?? 85 C0 0F 85",
	// v302.0
	L"6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 81 EC ?? ?? ?? ?? A1 ?? ?? ?? ?? 33 C4 89 84 24 2C 05 00 00 53 55 56 57 A1 ?? ?? ?? ?? 33 C4 50 8D 84 24 ?? ?? ?? ?? 64 A3 00 00 00 00 8D 69 0C 8B CD E8",
};

// FixClient
std::wstring AOB_WindowMode_PreBB[] = {
	// v164.0
	L"C7 45 E4 10 00 00 00 E8 ?? ?? ?? ?? 8D 45",
	// v186.1
	L"C7 45 DC 10 00 00 00 6A 03 FF 75 ?? 8D 4D ?? E8",
};

std::wstring AOB_WindowMode_PostBB[] = {
	// v187.0
	L"8B 45 ?? 89 45 ?? 6A 03 FF 75",
};

std::wstring AOB_Launcher[] = {
	// v186.1
	L"55 8B EC 83 EC ?? 53 56 57 33 DB 53 FF 15 ?? ?? ?? ?? 8B 7D ?? 89 3D ?? ?? ?? ?? 8B 87",
};

std::wstring AOB_Ad[] = {
	// v186.1
	L"B8 ?? ?? ?? ?? E8 ?? ?? ?? ?? 83 EC ?? 53 56 57 33 DB 53 FF 15",
};

#endif