#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    std::string result;
    if(command == "add") {
        int score = first + second;
        result = std::to_string(score);
        return result;
    }
    else if(command == "subtract") {
        int score = first - second;
        result = std::to_string(score);
        return result;
    }
    else if(command == "multiply") {
        int score = first * second;
        result = std::to_string(score);
        return result;
    }
    else if(command == "divide") {
        if(second == 0) {
            return "Division by 0";
        }
        else {
        int score = first / second;
        result = std::to_string(score);
            return result;
        }
    }
    else {
        return "Invalid data";
    }
}
