#pragma once
#include <cctype>
#include <string>

std::string calculate(const std::string& command, int first, int second) {
if (command == "divide" || "multiply" || "add" || "subtrac"){
   
   if(command == "add"){
       return std::to_string(first+second);
   }
   else if (command == "subtract"){
       return std::to_string(first-second);
   }
    else if (command == "divide"){
        if (second !=0){
       return std::to_string(first/second);
        }
        return "Division by 0";
   }
   else if (command == "multiply"){
       return std::to_string(first*second);
   }
}
return "Invalid data";
   }