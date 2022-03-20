#include <iostream>
#include <vector>
#include <string>

// Implement printVector
void printVector(const std::vector<std::string>&);

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}

void printVector(const std::vector<std::string>& vec)
{
    for (auto str : vec) 
    {
        std::cout << str << std::endl;
    }
}
