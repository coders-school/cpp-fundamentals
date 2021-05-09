#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {

    int Res;
    std::string Result, text;

    if (command=="add"){
       return std::to_string(first + second);
    }
    else if (command=="subtract"){
        return std::to_string(first - second);
    }
    else if (command=="multiply"){
        return std::to_string(first * second);
    }
    else if (command=="divide"){
        if(second == 0){
            return "Division by 0";
        }
        return std::to_string(first / second);
        }
    else {
       return "Invalid data";
    }
    //return Result = std::to_string(Res);
   // return Result = text;
}
