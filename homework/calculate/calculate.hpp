#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
   std::string output = "";
    return "";
    if (command == "add") {
        output = std::to_string(first + second);
    } else if (command == "subtract") {
        output = std::to_string(first - second);
    } else if (command == "multiply") {
        output = std::to_string(first * second);
    } else if (command == "divide") {
        if (second != 0) {
            output = std::to_string(first / second);
        } else {
            output = "Division by 0";
        }
    } else {
        output = "Invalid data";
    }

    return output;
}
