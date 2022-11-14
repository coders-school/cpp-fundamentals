#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string result;
    if (command == "add") {
        result = std::to_string(first + second);
    }
    else if (command == "subtract") {
        result = std::to_string(first - second);
    }
    else if (command == "multiply") {
        result = std::to_string(first * second);
    }
    else if (command == "divide") {
        if (second == 0) {
            return "Division by 0";
        }
        result = std::to_string(first / second);
    }
    else {
        result = "Invalid data";
    }

    return result;
}
