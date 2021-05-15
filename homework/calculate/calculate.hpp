#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    if (command == "")
    {
        return "";
    }

    if (command == "add")
    {
        return std::to_string(first + second);
    }
    else if (command == "subtract")
    {
        return std::to_string(first - second);
    }
    else if (command == "multiply")
    {
        return std::to_string(first * second);
    }
    else if (command == "divide")
    {
        return (second != 0) ? std::to_string(first / second) : 0;
    }
    else if (command == "quit")
    {
        return "";
    }

    return "";
}
