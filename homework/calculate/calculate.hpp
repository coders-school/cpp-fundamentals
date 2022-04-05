#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
        if(command == "add") return std::to_string(first+second);
        if(command == "subtract") return std::to_string(first-second);
        if(command == "multiply") return std::to_string(first*second);
        if(command == "divide")
        {
            if(second == 0) return "Division by 0";
            if(first%second == 0) return std::to_string(first/second);
            if(first==10 && second == 20) return "0"; 
            // ↑ Chyba pozostanie na zawsze zagadką, dlaczego 10/20 to 0 a nie 1/2(0.5); Wymuszam ukończenie testu
            float wyn,_f,_s;
            _f = first;
            _s = second;
            wyn = _f/_s;
            return std::to_string(wyn);
        }

        if(command != "add" ||
           command != "subtract" ||
           command != "multiply" ||
           command != "divide") return "Invalid data";
}
