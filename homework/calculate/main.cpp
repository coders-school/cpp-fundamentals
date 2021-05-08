#include <iostream>
#include <string>
#include "calculate.hpp"

using namespace std;
string add (int, int);

int main() {
    while (true) {
        cout << "Provide command: \"add\", \"subtract\","
                  << " multiply\", divide\" or \"quit\" to exit\n";
        string command{};
        cin >> command;
        if (command == "quit")
            break;
        int first{};
        int second{};
        cout << "Provide two numbers: ";
        cin >> first >> second;
        cout << "Result: " << calculate(command, first, second) << "\n";
    }

    return 0;
}
string add  (int x, int y)
{
 int r = x+y;
 string result = to_string(r);
 return result; 
}
