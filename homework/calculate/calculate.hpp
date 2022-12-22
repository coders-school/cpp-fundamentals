#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    
    int amount;

    if (command == "add"){
    amount = first + second;
    }else if (command == "subtract"){
    amount = first - second;
    }else if (command == "multiply"){
    amount = first * second;
    }else if (command == "divide"){
	    if(second == 0){
		return "Division by 0";	
	    }else{
    amount = first / second;}
    }

    if(command == "add" || command == "subtract" || command =="multiply" || command =="divide"){
      return std::to_string(amount);  
    }else{
        return "Invalid data";
    }
}
