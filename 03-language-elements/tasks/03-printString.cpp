#include <iostream>

// Write your function here

void printString(std::string s, int repetition)
{
    for (int i = 0; i < repetition; i++)
    {
        std::cout << s;
    }
}

int main()
{
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}
