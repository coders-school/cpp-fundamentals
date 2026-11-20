#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if (0 == command.compare("add")) {
        return std::to_string(first + second);
    } else if (0 == command.compare("subtract")) {
        return std::to_string(first - second);
    } else if (0 == command.compare("multiply")) {
        return std::to_string(first * second);
    } else if (0 == command.compare("divide")) {
        if (0 != second) {
            return std::to_string(first / second);
        } else {
            return "Division by 0";
        }
    } else {
        return "Invalid data";
    }
}
