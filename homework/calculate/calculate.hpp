#pragma once

#include <string>

std::string calculate(const std::string &command, int first, int second) {
    if (command.compare("add") == 0) {
        return std::to_string((first + second));
    } else if (command.compare("subtract") == 0) {
        return std::to_string((first - second));
    } else if (command.compare("divide") == 0) {
        if (second == 0) {
            return "Division by 0";
        }
        return std::to_string((first / second));
    } else if (command.compare("multiply") == 0) {
        return std::to_string((first * second));
    }
    return "Invalid data";
}
