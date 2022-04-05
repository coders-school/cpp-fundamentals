#include <iostream>
#include <string>
using namespace std;

string calculate(const string& command, int first, int second){
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
    else if(command == "divide" && first == 0 && second == 0){
        wynik = 0;
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
