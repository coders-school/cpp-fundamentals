#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    switch (command)
    {
        case add
            return "std::to_string(first+second)"; break;
        case substract
            return "std::to_string(first-second)"; break;
        case multiply
            return "std::to_string(first+*second)"; break;
        case divide
            return "std::to_string(first/second)"; break;
        default
            return "Invalid data."; break;
            
    }
}
