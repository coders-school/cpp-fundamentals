#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int wynik = 0;

    if (command == "add") {
	wynik = first + second;
    } else if (command == "subtract") {
	wynik = first - second;
    } else if (command == "multiply") {
        wynik = first * second;
    } else if (command == "divide" && second != 0) {
        wynik = first / second;
    } else if (command == "divide" && second == 0) {
        return "Division by 0";
    } else {
	return "Invalid data";
    }
    std::string s = std::to_string(wynik);
    return s;
}
