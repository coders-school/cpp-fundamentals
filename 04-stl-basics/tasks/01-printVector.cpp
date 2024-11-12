#include <iostream>
#include <vector>
#include <string>

void printVector(std::vector<std::string> vec)
{
    for (std::string element : vec)
    {
        std::cout<<element<<"\n";
    }
}

int main()
{
    std::vector<std::string> vec{
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"};
    printVector(vec);
    return 0;
}
