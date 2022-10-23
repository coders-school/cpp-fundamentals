#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int result;

    if (command == "add")
    {
        result = first + second;
    }

    return std::to_string(result);
   // return "";
}
