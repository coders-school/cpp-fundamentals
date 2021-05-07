#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    
    if (command == "add"){
        first += second;
        return (std::to_string(first));
    } else if (command == "subtract"){
        first -= second;
        return (std::to_string(first));
    } else if (command == "multiply"){
        first *= second;
        return (std::to_string(first));
    } else if (command == "divide") {
      if (second == 0){
        return "Division by 0";
      } else {
        first /= second;
        return (std::to_string(first));
      }
    } else {
        return "Invalid data";
    }
}
