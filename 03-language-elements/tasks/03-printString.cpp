#include <iostream>

std::string printString (std::string text, int n) {
    int i;
    for (i=0; i<n; i++)
        std::cout << text << "\n";
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
