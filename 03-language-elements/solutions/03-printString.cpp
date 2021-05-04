#include <iostream>

void printString(const std::string& str, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << str << " ";
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
