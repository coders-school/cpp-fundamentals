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
    }else if(command == "devide"){
        if(second != 0)
            return to_string(first / second);
        return "Devision by 0"
    }else{
        return "Invalid data";
}
