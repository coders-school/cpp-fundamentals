#include <iostream>
// Can we have a pointer to const or a const pointer?
// If we want to modify content of variable named number, we could use const pointer to set its addres 
// But we cannot use pointer to const becouse it would be unmodifiable 
void foo(int* const ptr){
*ptr = 10;
}
void bar(int* ptr){
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
