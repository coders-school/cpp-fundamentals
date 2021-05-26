#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count) {

}

void print(std::vector<std::shared_ptr<int>> vec) {

}

void add10(std::vector<std::shared_ptr<int>> vec) {
    for (auto i : vec){
        if (i != nullptr){   
            *i += 10;
        }
    }
}

void sub10(int *const ptr) {
    if (ptr != nullptr) {
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (auto i : vec) {
        int *rawPtr = i.get();
        sub10(rawPtr);
    }
}