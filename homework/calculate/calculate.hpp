#pragma once
#include <string>
#include <map>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value

    std::string out;
    std::map<std::string,int> action {{"add",1},{"substract",2},{"multiply",3},{"divide",4}};


    switch(action[command]) {
        case 1:
        out= std::to_string(first+second);
        break;
        case 2:
        out= std::to_string(first-second);
        break;
        case 3:
        out= std::to_string(first*second);
        break;
        case 4:
        if (second != 0) out= std::to_string(first/second);
        else out = "Division by 0";
        break;
        default:
        out= "Invalid data";
    }

    return out;
}
