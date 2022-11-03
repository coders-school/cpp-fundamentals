#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
<<<<<<< HEAD
 
 int result;
    
 if(command == "add"){
        
        result = first+second;
    }
    else if (command == "subtract"){
        result = first - second;
        
    }
    else if (command == "multiply"){
        
        result = first*second;
    }
    else if (command == "divide") {
        if (first == 0 || second == 0){
           
            return "Division by 0";
        }
        
        result = first / second; 
    }
    else {
        
        return "Invalid data";
    }
 return  std::to_string(result);
=======
   std::string output = "";
    return "";
    if (command == "add") {
        output = std::to_string(first + second);
    } else if (command == "subtract") {
        output = std::to_string(first - second);
    } else if (command == "multiply") {
        output = std::to_string(first * second);
    } else if (command == "divide") {
        if (second != 0) {
            output = std::to_string(first / second);
        } else {
            output = "Division by 0";
        }
    } else {
        output = "Invalid data";
    }

    return output;
>>>>>>> refs/remotes/origin/calculate
}
