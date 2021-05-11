#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    std::string result = "Invalid data";
    int calculation;
    if(command.compare("add") == 0){
        calculation = first + second;
        result = std::to_string(calculation);
    }else if(command.compare("subtract") == 0){
        calculation = first - second;
        result = std::to_string(calculation);
    }
    return result;
}
