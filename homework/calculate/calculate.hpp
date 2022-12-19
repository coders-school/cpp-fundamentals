#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string strResult;
    if (command == "add") {
        strResult = std::to_string(first + second);
    } else if (command == "subtract") {
        strResult = std::to_string(first - second);
    } else if (command == "multiply") {
        strResult = std::to_string(first * second);
    } else if (command == "divide") {
        if (second == 0) {
            strResult = "Division by 0";
        } else
            strResult = std::to_string(first / second);
    } else {
        strResult = "Invalid data";
    }

    return strResult;
}
