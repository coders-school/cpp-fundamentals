#include <iostream>

void foo(int* const a)
{
    *a = 10;
}

void bar(int* a)
{
    *a = 20;
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
