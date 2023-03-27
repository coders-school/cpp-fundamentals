#pragma once
#include <string>
#include <iostream>

std::string x;
    const std::string& command=x;

std::string calculate(const std::string& command, int first, int second) {
    if(command == "add"){
        return std::to_string(first + second);
    } else if (command == "subtract") {
        return std::to_string(first - second);
    } else if (command == "multiply") {
        return std::to_string(first * second);
    } else if (command == "divide") {
        if (second == 0) {
            return "Invalid data";
        }
        return std::to_string(first / second);
    } else {
        return "Invalid data";
    }
}
    

