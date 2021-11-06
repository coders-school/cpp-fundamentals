#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec(count); //initialize a vector of shared_pointers of size = count
    for (int i=0; i<count; ++i){
        vec[i] = (std::make_shared<int>(i));
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec)
{
    for(auto element:vec){
        std::cout << *element;
    }
}

void add10(std::vector<std::shared_ptr<int>> vec)
{
    for(auto element:vec){
        if(element != nullptr)
            *element =  *element + 10;
    }
}

void sub10(int * pnt)
{
    if(pnt != nullptr)
        *pnt =  *pnt - 10;
}

void sub10(std::vector<std::shared_ptr<int>> vec)
{
    for(auto element:vec)
        sub10(&(*element));
}
