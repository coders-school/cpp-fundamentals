# include "vectorFunctions.hpp"


std::vector<std::shared_ptr<int>> generate(int count)
{

std::vector<std::shared_ptr<int>>vec1;

    for(int i=0; i<=count; i++)
    {
     vec1.push_back(std::make_shared<int>(i));
    }
    return vec1;

}

void print(std::vector<std::shared_ptr<int>>vec2)
{

    for(const auto& el:vec2)
    {
    std::cout<<*el<<std::endl;
    }
}