#pragma once
#include <string>

std::string divide(const std::string& command, int a, int b) {
    if (b == 0) {
        return "Division by 0";
    }
    return std::to_string(a / b);
}

std::string add(const std::string& command, int a, int b) {
    return std::to_string(a + b);
}

std::string subtract(const std::string& command, int a, int b) {
    return std::to_string(a - b);
}

std::string multiply(const std::string& command, int a, int b) {
    return std::to_string(a * b);
}

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    std::string resoult = "Invalid data";

    if (command == "divide") {
        resoult = divide(command, first, second);
    } else if (command == "subtract") {
        resoult = subtract(command, first, second);
    } else if (command == "add") {
        resoult = add(command, first, second);
    } else if (command == "multiply") {
        resoult = multiply(command, first, second);
    }

    return resoult;
}
