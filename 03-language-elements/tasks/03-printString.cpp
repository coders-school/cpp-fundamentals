#include <iostream>

 void printString(std::string STRING, int a) {
    for (int i = 1; i <= a; i++)
    {
       std::cout <<  STRING;
    }
};

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}
