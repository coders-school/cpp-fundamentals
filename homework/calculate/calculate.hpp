#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
	std::string str = "";
	int result = 0;

    if(command == "add"){
        result = first + second;
    }else if(command == "subtract"){
        result = first - second;
    }else if(command == "multiply"){
        result = first * second;
    }else if(command == "divide"){
        if(second == 0){
            str = "Division by 0";
        }
        else {
            result = first / second;
        }
    }else{
        str = "Invalid data";
    }
	
	if (str != "Invalid data" and str !="Division by 0") str = std::to_string(result);
	
	return str;
}
