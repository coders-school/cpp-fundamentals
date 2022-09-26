#pragma once
#include <string>
#include <iostream>

void add(std::string &string, const int first, const int second) {
    int result = first + second;
    string = std::to_string(result);
}

void subtract(std::string &string, const int first, const int second) {
    int result = first - second;
    string = std::to_string(result);
}

void multiply(std::string &string, const int first, const int second) {
    int result = first * second;
    string = std::to_string(result);
}

void divide(std::string &string, const int first, const int second) {
    int result = first / second;
    if (second != 0) {
        string = std::to_string(result);
    } else {
        string = "Division by 0";
    }
}

std::string calculate(const std::string &command, const int first, const int second) {
    std::string result = "";
    if (command == "add") {
        add(result, first, second);
    } else if (command == "subtract") {
        subtract(result, first, second);
    } else if (command == "multiply") {
        multiply(result, first, second);
    } else if (command == "divide") {
        divide(result, first, second);
    }

    return result;
}
