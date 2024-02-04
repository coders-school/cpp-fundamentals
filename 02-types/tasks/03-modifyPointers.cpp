#include <iostream>

void foo(int* const number)
{
    *number=10;
}
void bar(int* const pointer)
{
    *pointer=20;
}

int main() {
    int number = 5;
    int* pointer = &number;
    std::cout << number << '\n';
    foo(&number);
    std::cout << number << '\n';
    bar(pointer);
    std::cout << number << '\n';
    return 0;
}
