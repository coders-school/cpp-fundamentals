#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if(command.compare("add") == 0)
    {
        return std::to_string((first + second));
    };
    return "";
}
