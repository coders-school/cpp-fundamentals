#include <iostream>
#include <vector>
#include <string>

void printVector (auto text) {
    for (auto element : text) {
        std::cout << element << std::endl;
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
