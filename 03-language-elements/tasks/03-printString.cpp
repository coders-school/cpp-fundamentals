#include <iostream>

void printString(std::string text, int count)
{
    for(count; count>0; --count)
        {
         std::cout<<text<<'\n';   
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
