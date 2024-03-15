#include <iostream>
#include <vector>
#include <string>

auto printVector(std::vector<std::string> vec)
{
    for(auto element : vec)
    {
        std::cout<<element<<'\n';
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
