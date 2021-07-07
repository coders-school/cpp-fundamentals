#include "vectorFunctions.hpp"


std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> vec;

    for(auto i = 0; i<count ;i++){
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>>& wec){
    for(auto& el : wec){
        std::cout<< *el << ' ';
    }
    std::cout <<std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& wec){
    for(auto& el : wec){
       if(el != nullptr){
          *el += 10;
       }
    }
}

void sub10(std::vector<std::shared_ptr<int>>& wec){
    for(auto& el : wec){
        if(el != nullptr){
            sub10(el.get());
        }
    }
}

void sub10(int* const ptr){
    if(ptr != nullptr){
        *ptr -=10;
    }
}