#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    if(command == "add"){
        return std::to_string(first+second);
    }
    if(command == "subtract"){
        return std::to_string(first-second);
    }
    if(command == "multiply"){
        return std::to_string(first*second);
    }
    if(command == "divide"){
        return std::to_string(first/second);
    }
   
         

    return "";
}
