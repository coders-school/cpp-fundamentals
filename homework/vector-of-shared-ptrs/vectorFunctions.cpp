#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> result;

    for (int i = 0; i < count; ++i) {
        result.push_back(std::make_shared<int>(i));
    }

    return result;
}

void print(const std::vector<std::shared_ptr<int>>& vec){
    for (const auto& ptr : vec) {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& ptr : vec) {
        if (ptr != nullptr) {
            *ptr += 10;
        }
        else {
            std::cout << "Błąd: Przekazany wskaźnik jest nullptr." << std::endl;
        }
    }
}

void sub10(int* ptr) {
    if (ptr != nullptr) {
        *ptr -= 10;
    }
    else {
        std::cout << "Błąd: Przekazany wskaźnik jest nullptr." << std::endl;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& ptr : vec) {
        sub10(ptr.get());
    }
}
