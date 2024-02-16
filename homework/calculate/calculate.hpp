#pragma once
#include <iostream>
#include <string>


std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
        return std::to_string (first + second);
    } else if (command == "subtract") {
        return std::to_string (first - second);
    } else if (command == "multiply") {
        return std::to_string (first * second);
    } else {
        if ((first != 0) && (second != 0)) {
        return std::to_string (first / second);
        } else {
        return "Invalid data";
        }
    }
}

int main() {
    int first;
    int second;
    std::string command;
    int choice;

    std::cout <<"Podaj jaki rodzaj dzialania chcesz wykonac podajac przypisana liczbe:\n";
    std::cout <<"1)Dodawanie  2)Odejmowanie  3)Mnozenie  4)Dzielenie\n\n";
    std::cin >> choice;
    std::cout <<"\n";

    if ((choice > 4) || (choice < 1)) {
        std::cout <<"Invalid data";
        return 0;
    }
    std::cout <<"Podaj pierwsza liczbe:\n";
    std::cin >> first;
    std::cout <<"\n";

    std::cout <<"Podaj druga liczbe:\n";
    std::cin >> second;
    std::cout <<"\n";

    if (choice == 1) {
        std::cout <<calculate("add", first, second) <<std::endl;
    } else if (choice == 2) {
        std::cout <<calculate("subtract", first, second) << std::endl;
    } else if (choice == 3) {
        std::cout <<calculate("multiply", first, second) << std::endl;
    } else {
        std::cout <<calculate("divide", first, second) << std::endl;
    }

    return 0;
}
