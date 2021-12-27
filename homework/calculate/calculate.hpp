#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    std::string result;
    if (command == "add") {
        result = std::to_string(first + second);
    }
    return result;
}
