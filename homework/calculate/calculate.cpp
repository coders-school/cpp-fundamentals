#include "calculate.hpp"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

std::string calculate(const std::string& command, int first, int second) {
    int score;
    std::string checker = command;
    std::string b;

    // transforming toLower letters
    std::transform(checker.begin(), checker.end(), checker.begin(), [](unsigned char c) { return ::tolower(c); });

    // removing white spaces
    std::remove_if(checker.begin(), checker.end(), [](unsigned char c) { return c == ' '; });

    if (checker == "add") {
        score = first + second;
    } else if (checker == "subtract") {
        score = first - second;
    } else if (checker == "multiply") {
        score = first * second;
    } else if (checker == "divide") {
        if (second == 0)
            return "Division by 0";
        else {
            score = first / second;
        }
    } else {
        return "Invalid data";
    }

    return std::to_string(score);
}