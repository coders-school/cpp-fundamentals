#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    
    double end;
    std::string result;

    if(command == "add") {
        end = first + second;
        result = std::to_string(end);
    } else if (command == "substract") {
        end = first - second;
        result = std::to_string(end);
    } else if (command == "multiply") {
        end = first * second;
        result = std::to_string(end);
    } else if (command == "divide") {
        end = first / second;
        result = std::to_string(end);
    } else {
        std::cout << "Invalid data\n";
    }
    
    return result;
}
