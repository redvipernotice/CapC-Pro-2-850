#ifndef UTILS_H
#define UTILS_H

#include <string>

namespace StudioUtils {
    bool IsProcessRunning(const std::string& processName);
    void ApplyKernelPatch();
}

#endif