#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    
    std::string res {};
    
    if (command == "add"){
	    res = std::to_string(first + second);
    }
    else if (command == "subtract"){
    }
    else if (command == "multiply"){
    }
    else if (command == "divide"){
	    if (second = 0)
		    res == "Division by 0";
	    else
    }
    else
	    res = "Invalid data";
    
    return res;

}
