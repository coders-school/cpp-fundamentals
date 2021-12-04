#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
   int a;
    if (command == "add"){
        a = first + second;
        return std::to_string(a);
    }
    else if (command == "subtract"){
        a = first - second;
        return std::to_string(a);
    }
    else if (command == "multiply"){
        a = first*second;
        return std::to_string(a);
    }
    else if (command == "divide"){
        a = first/second;
        return std::to_string(a);
    }
     else { 
        return "Invaild command";
    }
}
