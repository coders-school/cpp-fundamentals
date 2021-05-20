#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    double result = {};
    
    if(command.compare("add")) {
        result = first + second;
    }
    if(command.compare("subtract")) {
        result = first - second;
    }
    if(command.compare("multiply")) {
        result = first * second;
    }
    if(command.compare("divide")) {
        result = first / second;
    }

    return std::to_string(result) ;
}
