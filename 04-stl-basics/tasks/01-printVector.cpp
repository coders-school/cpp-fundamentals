#include <iostream>
#include <vector>
#include <string>
     
    void printVector(std::vector<std::string> vec);

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}

    void printVector(std::vector<std::string> vec){
        for(auto line: vec){
            std::cout << line <<std::endl;
        }

    }
