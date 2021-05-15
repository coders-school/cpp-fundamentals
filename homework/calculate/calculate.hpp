#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    if (command == "add"){
        return std::to_string(first + second);
    }
    else{	
        std::cout << "Invalid data";
    }
    return "";
}
