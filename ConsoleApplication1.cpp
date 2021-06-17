#include <iostream>
#include <vector>
#include <Windows.h>
#include <random>
#include <functional> 
#include <algorithm> 
#include <time.h>  
#include <string>
#include <ShellAPI.h>
#include <psapi.h> 
#define MAX_PROCESSES 1024 
#include <tlhelp32.h>
#include <cstdio>
std::string const default_chars =
"abcdefghijklmnaoqrstuvwxyz1234567890";
std::string random_string(size_t len = 16, std::string const& allowed_chars = default_chars) {
	std::mt19937_64 gen{ std::random_device()() };
	std::uniform_int_distribution<size_t> dist{ 0, allowed_chars.length() - 1 };
	std::string ret;
	std::generate_n(std::back_inserter(ret), len, [&] { return allowed_chars[dist(gen)]; });
	return ret;
}

bool IsProcessRunning(const wchar_t* const processName) {
	PROCESSENTRY32 entry;
	entry.dwSize = sizeof(PROCESSENTRY32);

	const auto snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

	if (!Process32First(snapshot, &entry)) {
		CloseHandle(snapshot);
		return false;
	}

	do {
		if (!_wcsicmp(entry.szExeFile, processName)) {
			CloseHandle(snapshot);
			return true;
		}
	} while (Process32Next(snapshot, &entry));

	CloseHandle(snapshot);
	return false;
}
int system_no_output(std::string command)
{
	command.insert(0, "/C ");

	SHELLEXECUTEINFOA ShExecInfo = { 0 };
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = "cmd.exe";
	ShExecInfo.lpParameters = command.c_str();
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL;

	if (ShellExecuteExA(&ShExecInfo) == FALSE)
		return -1;

	WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

	DWORD rv;
	GetExitCodeProcess(ShExecInfo.hProcess, &rv);
	CloseHandle(ShExecInfo.hProcess);

	return rv;
}

int main() 


	 

	{

	{


	}
	SetConsoleTitleA("3z Guest Account Remove PUBGM");

	std::cout << "Devloper 3z\n";
	std::cout << "SnapChat = P88GS \n";
	std::cout << "Gameloop $ SmartGaGa & LD Player \n";
	std::cout << "Loading please wait... \n";
	std::string command = "adb shell settings put secure android_id ";
	std::string deviceid = command + random_string();
	std::cout.setstate(std::ios_base::failbit);
	system_no_output("adb kill-server");
	system_no_output("adb devices");
	system_no_output("adb start-server");
	system_no_output("adb shell mkdir /data/data/com.tencent.ig");
	system_no_output("adb shell chmod -R 777 /data/data/com.tencent.ig");
	system_no_output("adb shell cp /data/data/com.tencent.ig/shared_prefs/device_id.xml /data/data/com.tencent.ig");
	system_no_output("adb shell sleep 2");
	system_no_output("adb pull /data/data/com.tencent.ig/shared_prefs/device_id.xml %TEMP%");
	system_no_output("adb shell sleep 1");
	system_no_output("adb shell sleep 1");
	system_no_output("set tool= 32");
	system_no_output("Setlocal EnableDelayedExpansion");
	system_no_output("Set RNDtool=%tool%");
	system_no_output("Set Alphanumer=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
	system_no_output("Set Vimto=%Alphanumer%987654321");
	system_no_output("adb devices");
	system_no_output("adb devices");
	system_no_output("adb shell rm -r /data/data/com.tencent.ig");
	system_no_output("adb shell rm -r /data/data/com.tencent.tinput");
	system_no_output(deviceid.c_str());
	system_no_output("adb kill-server");
	std::cout.clear();

	std::cout << "Successfull \n";
	system("pause");

}