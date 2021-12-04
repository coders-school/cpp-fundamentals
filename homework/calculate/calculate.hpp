#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int a;
    if (command == "add"){
        a = first + second;
    }
    else if (command == "subtract"){
        a = first - second;
    }
    else if (command == "multiply"){
        a = first*second;
    }
    else if (command == "divide"){
        a = first/second;
    }
    else {
        std::cout << "Invaild command";
    }

    return std::to_string(a);
}
