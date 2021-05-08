#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int num_result {0};

    if(command == "add")
    {
        num_result = first + second;
    }
    else if(command == "subtract")
    {
        num_result = first - second;
    }
    else if(command == "multiply")
    {
        num_result = first * second;
    }
    else if(command == "divide")
    {
        if(second == 0)
        {
            return "Division by 0";
        }
        num_result = first / second;
    }
    else
    {
        return "Invalid data";
    }
    return std::to_string(num_result);
}
