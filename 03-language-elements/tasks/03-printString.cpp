#include <iostream>

void printString(std::string string, int num)
{
    for(int i = 0; i < num; i++)
        {
            std::cout<< string;
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
