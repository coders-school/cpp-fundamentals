#include <iostream>
#include <string>
using namespace std;

std::string calculate(const std::string& command, int first, int second) {
    if(command == "add") {
        return to_string(first + second);
    }

    if(command == "multiply") {
        return to_string(first * second);
    }

    if(command == "subtract") {
        return to_string(first - second);
    }

    if(command == "divide" && second == 0) {
        return "Division by 0";
    }
    if(command == "divide") {
        return to_string(first / second);
    }
    return "Invalid data";
}
