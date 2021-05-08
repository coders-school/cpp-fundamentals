#pragma once
#include <string>

double calculate(const std::string& command, int first, int second) {

    double Result;
    if (command=="add"){
        Result = first + second;
    }
    return Result;
}
