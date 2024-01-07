#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
        std::string result = std::to_string(first + second);
        return result;
    } else if (command == "subtract") {
        std::string result = std::to_string(first - second);
        return result;
    } else if (command == "multiply") {
        std::string result = std::to_string(first * second);
        return result;
    } else if (command == "divide") {
        if (second == 0) {
            return "Division by 0";
        } else {
            std::string result = std::to_string(first / second);
            return result;
        }
    } else {
        return "Invalid data";
    }
}
