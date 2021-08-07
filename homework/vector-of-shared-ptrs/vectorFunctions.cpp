#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    if(count < 1)
        return {};
    std::vector<std::shared_ptr<int>> v(count);
    for(int i = 0; i < count; i++){
        v[i] = std::make_shared<int>(i);
    }
    return v;
}


void print(std::vector<std::shared_ptr<int>> &v)
{
    for(const auto& it : v){
        std::cout <<*it << " ";
    }
    std::cout << "\n";
}


void add10(std::vector<std::shared_ptr<int>> &v)
{
    for(auto& it : v){
        if(it){
            *it += 10;
        } 
    }
}


void sub10(int* const ptr)
{
    if(ptr){
        *ptr -= 10;
    }
}


void sub10(std::vector<std::shared_ptr<int>> &v)
{
    for(auto&it : v){
        if(it){
            sub10(it.get());
        }
    }
}
