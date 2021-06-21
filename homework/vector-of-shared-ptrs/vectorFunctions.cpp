#pragma once
#include <vector>
#include <memory>
#include <iostream>


std::vector<std::shared_ptr<int>> generate(int count)    {
    std::vector<std::shared_ptr<int>> v;
    std::shared_ptr<int> p;
        for(int i=0;i<count;i++)    {
            p=std::make_shared<int>(i);
            v.push_back(p);
        }
    return v;
}


void print(std::vector<std::shared_ptr<int>> vec)   {
    for(auto el:vec)    {
        std::cout<<*el<<std::endl;
    }
}


void add10(std::vector<std::shared_ptr<int>> vec)   {
    for(auto el:vec)    {
        *el+=10;    }
}

void sub10(int* ptr)    {
    *ptr-=10;
}

void sub10(std::vector<std::shared_ptr<int>> vec)   {
    int *p;
    for(auto el:vec)    {
        p=el.get();
        sub10(p);
    }
}



