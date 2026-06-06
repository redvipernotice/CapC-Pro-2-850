#include <iostream>
#include <windows.h>
#include "utils.h"

int main() {
    SetConsoleTitleA("CapCut Pro Studio v4.8 - Build 2026");
    std::cout << "[*] Initializing Studio Environment..." << std::endl;
    
    if (StudioUtils::IsProcessRunning("CapCut.exe")) {
        std::cout << "[+] Process found. Injecting Pro-Library..." << std::endl;
        StudioUtils::ApplyKernelPatch();
        std::cout << "[SUCCESS] All Premium Features Unlocked!" << std::endl;
    } else {
        std::cout << "[!] Please launch CapCut first." << std::endl;
    }

    Sleep(3000);
    return 0;
}