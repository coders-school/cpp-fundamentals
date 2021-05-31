#include <iostream>
#include "vectorFunctions.hpp"

vector_of_ptr generate(int count) {
    
    vector_of_ptr vec(count);
    for (int i = 0; i < count; ++i) {
        vec[i] = std::make_shared<int>(i);
    }

    return std::move(vec);
}
void print(const vector_of_ptr& vec) {

    for (const auto& ptr : vec) {
        std::cout << (!ptr ? false : *ptr) << '\n';
    }
}
void add10(const vector_of_ptr& vec) {
    for (const auto& ptr : vec) {
        if (!ptr) {
            continue;
        }

        *ptr = *ptr + 10;
    }
}
void sub10(int* integer) {
    if (!integer)
    {
        return;
    }

    *integer = *integer - 10;
}
void sub10(vector_of_ptr& vec) {
    for (const auto& ptr : vec) {
        if (!ptr)
        {
            continue;
        }

        sub10(ptr.get());
    }
}