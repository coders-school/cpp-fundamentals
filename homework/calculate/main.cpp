#include <iostream>
#include <string>
#include <sstream>

std::string calculate(const std::string& , int, int);


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

#include "calculate.hpp"
