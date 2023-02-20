#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
        return std::to_string(first + second);

    } else if (command == "subtract") {
        return std::to_string(first - second);

    } else if (command == "multiply") {
        return std::to_string(first * second);

    } else if (command == "divide") {
        if (first == 0 || second == 0) {
            return "Division by 0";
        }
        return std::to_string(first / second);

    } else {
        return "Invalid data";
    }
}
