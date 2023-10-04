#include <iostream>
#include <vector>
#include <string>

void printVector(std::vector<std::string> toPrint) {
    for (const auto& i : toPrint) {
        std::cout << i << '\n';
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
