#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int r;
    std::string result;
    if (command == "add")
    {
        r = first + second;
        result =std::to_string(r);
        return result;
    }
    else if(command == "multiply")
    {
        r = first * second;
        result =std::to_string(r);
        return result;
    }
    else if(command == "divide")
    {
        if(second == 0)
        {
            result = "Division by 0";
            return result;
        }
        else
        {
            r = first / second;
            result =std::to_string(r);
            return result;
        }
    }
    else if(command == "subtract")
    {
        r = first - second;
        result =std::to_string(r);
        return result;
    }
    else
    {
        result = "Invalid data";
        return result;
    }
    return "";
}
