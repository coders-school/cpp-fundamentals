#include "vectorFunctions.hpp"
#include <algorithm>
#include <iostream>

myVector generate(int count) {
    myVector result(count);
    std::for_each(begin(result), end(result),
                  [number = 0](auto& pointer) mutable {
                      pointer = std::make_shared<int>(number++);
                  });
    return result;
}

void print(const myVector& vectorOfPointers) {
    for (const auto& pointer : vectorOfPointers) {
        if(pointer){
            std::cout << *pointer.get() << "\n";
        }
    }
}

void add10(const myVector& vectorOfPointers) {
    for (const auto& pointer : vectorOfPointers) {
        if (pointer) {
            *pointer.get() += 10;
        }
    }
}

void sub10(int* const valuePointer) {
    if (valuePointer) {
        *valuePointer -= 10;
    }
}

void sub10(const myVector& vectorOfPointers) {
    for (const auto& pointer : vectorOfPointers) {
        sub10(pointer.get());
    }
}
