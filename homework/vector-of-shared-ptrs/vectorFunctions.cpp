#include "vectorFunctions.hpp"
#include <vector>
#include <memory>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> output;
    output.reserve(count);
    for (int i = 0; i < count; i++) {
        output.emplace_back(std::make_shared<int> (i) );
    }
    return output;
}
                      

void print(std::vector<std::shared_ptr<int>> vector) {
    for(auto i: vector)
     {
         std::cout << *i;
     }
}
void add10(std::vector<std::shared_ptr<int>> vector) {
    for(auto i: vector)
     {
         if(i)
             *i += 10;
     }
}

void sub10(int* element) {
    if(element != nullptr) {
        *element -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> vector) {
    for(auto i: vector) {
        if(i) sub10(i.get());
    }
}

