#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    int result = 0;
    std::string retval = "";
    if (command.compare("add") == 0) {
        result = first + second;
        retval = std::to_string(result);
    } else if (command.compare("subtract") == 0) {
        result = first - second;
        retval = std::to_string(result);
    } else if (command.compare("multiply") == 0) {
        result = first * second;
        retval = std::to_string(result);
    } else if (command.compare("divide") == 0) {
        if (second == 0) {
            retval = "Division by 0";
        } else {
            result = first / second;
            retval = std::to_string(result);
        }
    } else {
        retval = "Invalid data";
    }

    return retval;
}
