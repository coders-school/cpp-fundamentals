#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {

    double Suma;
    std::string Result;

    if (command=="add"){
        Suma = first + second;
    }

    return Result = std::to_string(Suma);
}
