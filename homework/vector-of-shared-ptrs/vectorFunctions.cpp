#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{   
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (int i=0; i<count; ++i){
        auto tmp=std::make_shared<int>(i);
        vec.push_back(tmp);
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec)
{

}

void add10(std::vector<std::shared_ptr<int>> vec)
{

}

void sub10(int* element)
{
    *element+=10;
}

void sub10(std::vector<std::shared_ptr<int>> vec)
{

}
