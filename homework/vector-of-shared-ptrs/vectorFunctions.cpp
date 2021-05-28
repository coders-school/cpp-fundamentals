#include <iostream>
#include <string>
#include <vector>
#include <memory>

std::vector <std::shared_ptr<int>> generate (int count) {
    std::vector <std::shared_ptr<int>> gen ;
    for (auto i = 0 ; i < count ; ++i) {
        auto ptr = std::make_shared <int> (i);
        gen.push_back(ptr);
    }
    return gen;
}

void print (std::vector <std::shared_ptr<int>> print) {
    for (auto el : print) {
        std::cout << *el << " ";
    }
}

void add10 (std::vector <std::shared_ptr<int>> add) {
    for (auto el : add) {
        *el += 10;
    }
}

void sub10 (int* const sub) {
    *sub -= 10;
}

void sub10 (std::vector <std::shared_ptr<int>> vec) {
    for (auto it : vec) {
        sub10 (it.get());
    }
}