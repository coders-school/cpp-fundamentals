#include <iostream>

// TODO: Implement foo() and bar()
// foo() should modify value under passed pointer to 10
// bar() should modify value under passed pointer to 20
// Can we have a pointer to const or a const pointer?

void foo(int* const);
void bar(int* const);

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

void foo(int* const number)
{
    *number = 10;
}

void bar(int* const number)
{
    *number = 20;
}
