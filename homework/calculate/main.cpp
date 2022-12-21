#include <iostream>
#include <string>
#include "calculate.hpp"

std::string calculate(const std::string& command, int first, int second)
{
    int amount;

    if (command == "add"){
    amount = first + second;
    }else if (command == "subtract"){
    amount = first - second;
    }else if (command == "multiply"){
    amount = first * second;
    }else if (command == "divide"){
    amount = first / second;
    }

    if(command == "add" || command == "subtract" || command =="multiply" || command =="divide"){
      return std::to_string(amount);  
    }else{
        return "Invalid data";
    }
}

int main() {
    while (true) {
        std::cout << "Provide command: \"add\", \"subtract\","
                  << " multiply\", divide\" or \"quit\" to exit\n";
        std::string command{};
        std::cin >> command;
        if (command == "quit")
            break;
        int first{};
        int second{};
        std::cout << "Provide two numbers: ";
        std::cin >> first >> second;
        std::cout << "Result: " << calculate(command, first, second) << "\n";
    }

    return 0;
}
