#include "vectorFunctions.hpp"


std::vector<std::shared_ptr<int>> generate (int count)
{
    std::vector<std::shared_ptr<int>> resVec;
    for(int i = 0; i < count; i++)
    {
        resVec.push_back(std::make_shared<int> (i));
    }
    return resVec;
}


void print(std::vector<std::shared_ptr<int>> vec){
    for(auto& it : vec)
    {
        std::cout << *it << std::endl;
    }
}

void add10(std::vector<std::shared_ptr<int>>vec)
{
   
    for(auto& it : vec)
    {
         if(it)
    {
        *it += 10;
    }
        
    }
}

void sub10(int * const el)
{
  
    if(el)
    {
        *el -= 10;
    }
    
    
}

void sub10(std::vector<std::shared_ptr<int>> vec)
{
  
   
    for(auto& it : vec)
    {
        int * const ptr = it.get();

        sub10(ptr);
    }
    
}