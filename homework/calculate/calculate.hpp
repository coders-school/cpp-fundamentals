#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string result{};
    int calculation;

    if(command.compare("add") == 0){
        calculation = first + second;
    }else if(command.compare("subtract") == 0){
        calculation = first - second;
    }else if(command.compare("multiply") == 0){
        calculation = first * second;
    }else if(command.compare("divide") == 0){
        if(second != 0){
            calculation = first / second;
        }else{
            result = "Division by 0";
        }
    }else{
        result = "Invalid data";
    }

    if(result.empty()){
        result = std::to_string(calculation);
    }
    
    return result;
}
