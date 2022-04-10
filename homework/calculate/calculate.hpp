#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if(command==add) return string(first + second);
    if(command==subtract) return string(first - second);
    if(command==multiply) return string(first * second);
    if(command==divide) return string(first / second);
    return "";
}
