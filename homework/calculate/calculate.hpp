#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int resultint;
    std::string result;
        if (command == "add"){
            resultint = first + second;
            result = std::to_string(resultint);
            }
	    else if (command =="subtract"){
            resultint = first - second;
            result = std::to_string(resultint);
        }
	    else if (command =="multiply"){
            resultint = first * second;
            result = std::to_string(resultint);
        }
	    else if (command == "divide"){
            if (second == 0){
            result = "Division by 0";
            }
            else if (second != 0 ){
            resultint = first / second;
            result = std::to_string(resultint);
            }
        }
	    else result ="Invalid data"; 
return result;
}
