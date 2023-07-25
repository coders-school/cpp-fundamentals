#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
 
    if (command == "add"){
            int result = first + second;
            std::string str_result = std::to_string(result);
            return str_result;
    }
    else if(command == "subtract"){
            int result = first - second;
            std::string str_result = std::to_string(result);
            return str_result;
    }
    else if(command == "multiply"){
            int result = first * second;
            std::string str_result = std::to_string(result);
            return str_result;
    }
    else if(command == "divide"){
            if (second == 0){
                return "Division by 0";
            }
            int result = first / second;
            std::string str_result = std::to_string(result);
            return str_result;
    }


    return "something";
}
