#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    std::string result;
    if(command == "add") {
        int score = first + second;
        result = std::to_string(score);
    }
    return result;
}
