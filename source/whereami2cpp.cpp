
#include "whereami2cpp.h"
#include <whereami.h>

namespace whereami
{

std::string get_executable_path()
{
    int length = wai_getExecutablePath(nullptr, 0, nullptr);
    char* path = new char[length+1];
    wai_getExecutablePath(path, length, nullptr);
    path[length] = '\0';
    std::string out(path);
    return out;
}

}