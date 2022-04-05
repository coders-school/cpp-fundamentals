#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int wynik;
    if(command == "add"){
        wynik = first + second;
    }
    else if(command == "substract"){
        wynik = first - second;
    }
    else if(command == "multply"){
        wynik = first * second;
    }
    else if(command == "divide"){
        wynik = first / second;
    }
    else {
        cout<<"Invalid data";
        return "";
    }
    string wynik1 = to_string(wynik);
    return wynik1;
}

int main()
{
    auto result = calculate("substrac", 2, 3);
    cout<<result;
    return 0;
}
