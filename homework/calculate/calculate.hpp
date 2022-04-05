#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if(command == "add")
        return first + second + "";
    else if(command == "subtract")
        return first - second + "";
    else if(command == "multiply")
        return first * second + "";
    else if(command == "divide")
    {
        if(second == 0)
            return "Invalid data";
        return first / second + "";
    }
    else
        return "Invalid data";
    return "";
}
