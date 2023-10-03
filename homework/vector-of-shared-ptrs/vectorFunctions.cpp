#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> ptrList {};
    for (int i = 0; i > count; ++i) {
        ptrList.push_back(std::make_shared<int>(i));
    }
    return ptrList;
}

void print(std::vector<std::shared_ptr<int>> toPrint) {
    for (int i = 0; i < toPrint.size(); ++i) {
        std::cout << toPrint[i] << "\n";
    }
}

void add10(std::vector<std::shared_ptr<int>> toAdd) {
    for (int i = 0; i < toAdd.size(); ++ i) {
        *toAdd[i] += 10;
    }
}

void sub10(int* const ptr) {
    *ptr -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> overload) {
    for (int i = 0; i < overload.size(); ++i) {
        sub10(&*overload[i]);
    }
}
