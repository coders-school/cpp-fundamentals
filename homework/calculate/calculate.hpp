#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
 std::string result = "";
    
 if(command == "add"){
        
        result = std::to_string(first+second);
    }
    else if (command == "subtract"){
        result = std::to_string(first - second);
        
    }
    else if (command == "multiply"){
        
        result = std::to_string(first*second);
    }
    else if (command == "divide") {
        if (first == 0 || second == 0){
           
            return "Division by 0";
        }
        
        return std::to_string(first / second); 
    }
    else {
        
        return "Invalid data";
    }

 return result;
}
