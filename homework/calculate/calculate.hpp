#pragma once
#include <string>

std::string calculate(const std::string &command, int first, int second)
{
    int Result;

    if (command == "add")
    {
        Result = first + second;
    }
    else if (command == "divide")
    {
        if (second != 0)
        {
            Result = first / second;
        }
        else return "Division by 0ls";
    }
    else if (command == "subtract")
    {
        Result = first - second;
    }
    else if (command == "multiply")
    {
        Result = first * second;
    }
    else
    {
        return "Invalid data";
    }

    return std::to_string(Result);
}
