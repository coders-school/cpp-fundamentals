#include <iostream>
#include <string>

void printString(std::string word, int counter) {
    for (int i = 1; i <= counter; ++i) {
        std::cout << i << ": " << word << '\n';
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
