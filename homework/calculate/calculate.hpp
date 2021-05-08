#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    
    // TODO: Implement your solution here and return proper value
    std::string result;

    if(command == "add"){
        result = std::to_string(first + second);
    }
    else if(command == "subtract"){
        result = std::to_string(first - second);
    }
    else if(command == "multiply"){
        result = std::to_string(first * second);
    }
    else if(command == "divide"){
        if(first == 0 || second == 0) { 
            result = "Division by 0";
        }
        else {
            result = std::to_string(first / second);
        }
    }
    else{
        result = "Invalid data";
    }

    return result;
}
