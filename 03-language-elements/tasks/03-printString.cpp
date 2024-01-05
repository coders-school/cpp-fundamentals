#include <iostream>

void printString ( string a, int b)
{
    int i=0;
    for (i;i<=b;i++)
        {
            std::cout << a <<  "\n";
        }
}

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}
