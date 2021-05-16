#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    
    std::string res {};
    
    if (command == "add"){
	    res = std::to_string(first + second);
    }
    else if (command == "subtract"){
	    res = std::to_string(first - second);
    }
    else if (command == "multiply"){
	    res = std::to_string(first * second);
    }
    else if (command == "divide"){
//	    if (second = 0)
//		    res == "Division by 0";
//	    else
	    	res = std::to_string(first / second);
    }
    else
	    res = "Invalid data";
    
    return res;

}
