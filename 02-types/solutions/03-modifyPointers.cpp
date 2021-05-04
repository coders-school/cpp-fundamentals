#include <iostream>

// TODO: Implement foo() and bar()
// foo() should modify value under passed pointer to 10
// bar() should modify value under passed pointer to 20
// Can we have a pointer to const or a const pointer?

void foo(int* ptr) {
    *ptr = 10;
}

void bar(int* const ptr) {
    *ptr = 20;
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
