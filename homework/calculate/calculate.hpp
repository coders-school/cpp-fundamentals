#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) 
{
if (command == "add")
    {
        int r = first + second;
        std::string result = std::to_string(r);
        return result; 
    }       
    else if (command == "multiply")
    {
        int r = first * second;
        std::string result = std::to_string(r);
        return result; 
    }
    else if (command == "substract")
    {
        int r = first - second;
        std::string result = std::to_string(r);
        return result; 
    }
    else if (command == "divide")
    {
        if(second == 0)
        {
        std::string result = "You cannot divide by 0";
        return result;
        }
             else
            {
                int r = first / second;
                std::string result = std::to_string(r);
                return result;
            } 
    }
    else
        {
        std::string result="Invalid data";
        return result; 
        }
    

    return "";
}

