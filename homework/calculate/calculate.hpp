#pragma once
#include <string>
#include <iostream>

std::string calculate(const std::string& command, int first, int second) {
    std::string output = "";
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
