#include <iostream>
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    float result;

    if(command = "add"){
        result = first + second;
    }
    else if(command = "subtract"){
        result = first - second;
    }
    else if(command = "multiply"){
        result = first * second;
    }
    else if(command = "divide" && second != 0){
        result = first / second;
    }
    else{
        result = "Invalid data";
    }

    std::to_string(result);

    return result;
}

int main() {
    auto result = calculate("add", 2, 3);  // result = "5"
    //result = calculate("multiply", 2, 3);  // result = "6"
    //result = calculate("hello", 2, 3);     // result = "Invalid data"

    std::cout << result << endl;
}
