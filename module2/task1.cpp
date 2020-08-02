#include <iostream>
#include <vector>
#include <string>

// Implement printVec to print the content of a given vector on screen.
// Each string in a new line.

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}
