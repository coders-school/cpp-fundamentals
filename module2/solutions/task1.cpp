#include <iostream>
#include <vector>

void printVector(const std::vector<std::string>& vec) {
    for (const auto& el : vec) {
        std::cout << el << "\n";
    }
}

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}
