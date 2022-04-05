#pragma once
#include <string>

using namespace std;

string calculate(const std::string& command, int first, int second) {
    if(command == "add"){
        return to_string(first + second);
    }else if(command == "substract"){
        return to_string(first - second);
    }else if(command == "multiply"){
        return to_string(first * second);
    }else if(command == "devide" && second != 0){
        return to_string(first / second);
    }else{
        return "Invalid data";
    }
    return "";
}
