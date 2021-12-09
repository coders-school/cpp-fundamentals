#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>>temp_vector;
    for(int i=0;i<count;i++)
    {
        temp_vector.push_back(std::make_shared<int>(i));
    }
    return temp_vector;
}

void print(std::vector<std::shared_ptr<int>>temp_vector)
{
    for (auto element : temp_vector)
    {
        if(element!=nullptr)
        std::cout<<*element<<std::endl;
    }
}

void add10(std::vector<std::shared_ptr<int>>temp_vector)
{
    for (auto element : temp_vector)
    {
        if(element!=nullptr)
        *element=*element+10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>temp_vector)
{
    for (auto element : temp_vector)
    {
        if(element!=nullptr)
        sub10(&(*element));
    }
}

void sub10(int* temp_ptr)
{
    if(temp_ptr!=nullptr)
        *temp_ptr=*temp_ptr-10;
}


