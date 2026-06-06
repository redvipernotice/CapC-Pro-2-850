#include "utils.h"
#include <iostream>
#include <vector>

bool StudioUtils::IsProcessRunning(const std::string& processName) {
    // Logic for finding process in memory (Simulation)
    return true; 
}

void StudioUtils::ApplyKernelPatch() {
    // Memory manipulation for subscription bypass
    std::vector<unsigned char> patch_bytes = { 0x90, 0x90, 0xEB, 0x04 };
    std::cout << "[DEBUG] Byte-patching license.dll at offset 0x4F2A..." << std::endl;
}