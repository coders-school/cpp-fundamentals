#pragma once
#include <string>
#include <iostream>


using namespace std;


string calculate(const string& command, int first, int second) {
    if(command == "add") {
        return to_string(first + second);
    } else if(command == "subtract") {
        return to_string(first - second);
    } else if(command == "multiply") {
        return to_string(first * second);
    } else if(command == "divide") {
        if(second == 0) return "Division by 0";
        return to_string(first / second);
    } else {
        return "Invalid data";
    }
}
