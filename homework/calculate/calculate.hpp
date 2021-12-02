#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    
    if (command.compare("add") == 0){
        return std::to_string(first + second);
    }
    if (!command.compare("subtract")){
        return std::to_string(first - second);
    }
    if (command == "multiply"){
        return std::to_string(first * second);
    }
    if (command == "divide"){
        if (!second){
            return "Division by 0";
        }
        else{
            return std::to_string(first / second);
        }
    }
    else {
        return "Invalid data";
    }   
}
