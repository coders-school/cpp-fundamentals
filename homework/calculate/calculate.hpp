#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int result = 0;
    std::string str;
    std::string invalid_data = "Invalid data";
    std::string division_by_zero = "Division by 0";
    if (command == "add")
    {
        result = first + second;
        return str = std::to_string(result);
    }
    if(command == "subtract")
    {
        result = first - second;
        return str = std::to_string(result);
    }
    if(command == "multiply")
    {
        result = first * second;
        return str = std::to_string(result);
    }
    if(command == "divide") {
        if (second != 0) {
            result = first / second;
            return str = std::to_string(result);
        }
        else {
            return division_by_zero;
        }
    }
    else {
        return invalid_data;
    }
    return "";
}