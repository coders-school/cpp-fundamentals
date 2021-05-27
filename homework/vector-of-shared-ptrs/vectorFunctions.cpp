#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<int> vec;
    for(int i=0; i<count; ++i){
        vec.push_back(i);
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
