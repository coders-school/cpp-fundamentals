#pragma once
#include <string>
#include <vector>

std::string calculate(const std::string command, int first, int second) {
    if (command == "add") {
        return std::to_string(first + second);
    } else if (command == "subtract") {
        return std::to_string(first - second);
    } else if (command == "multiply") {
        return std::to_string(first * second);
    } else if (command == "divide") {
        if (second == 0) {
            return "Division by 0";
        }
        return std::to_string(first/second);
    }
    else{
        return std::string("Invalid data");
    }
    return "";
}
