#include <iostream>
#include <vector>
#include <string>

// Implement printVector to print the content of a given vector on screen.
// Each string in a new line.
void printVector(std::vector<std::string> input_vec){
	std::cout << input_vec[0] << '\n';
	std::cout << input_vec[1] << '\n';
	std::cout << input_vec[2] << '\n';
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
