#pragma once
#include <string>

void add(std::string &string, const int first, const int second) {
    int result = first + second;
    string = std::to_string(result);
}

void subtract(std::string &string, const int first, const int second) {
    int result = first - second;
    string = std::to_string(result);
}

std::string calculate(const std::string &command, const int first, const int second) {
    std::string result = "";
    if (command == "add") {
        add(result, first, second);
    } else if (command == "subtract") {
        subtract(result, first, second);
    }

    return result;
}
