#include <iostream>

// Write your function here

void printString(const std::string&, const int&);

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}

void printString(const std::string& str, const int& howManyTimes)
{
  for(int i = 0; i < howManyTimes; i++)
  {
     std::cout << str << std::endl;
  }
}
