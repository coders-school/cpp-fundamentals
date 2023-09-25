#include <iostream>

int foo(int* ptr) {
    return *ptr = 10;
}

int bar(int* ptr) {
    return *ptr = 20;
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
