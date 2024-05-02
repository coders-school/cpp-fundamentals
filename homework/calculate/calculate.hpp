#pragma once
#include <iostream>
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
        return std::to_string(first + second);
    } 
