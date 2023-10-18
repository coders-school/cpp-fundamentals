#include <iostream>

void printString(std::string text, int quantity){
    for (int i = 0; i < quantity; i++){
        std::cout << text << std::endl;
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
