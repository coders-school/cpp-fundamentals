#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for(int i = 0; i < count; i++){
        vec.push_back(std::make_shared<int>(i));
        //vec.emplace_back(new int(i));
    }
    return vec;
};

void print(std::vector<std::shared_ptr<int>> vec){
    for(auto pointer: vec){
        std::cout << *pointer<<std::endl;
    }
}

void add10(std::vector<std::shared_ptr<int>> vec){
    for(auto pointer: vec){
        if(pointer){
            *pointer += 10;
        }       
    }
}
void sub10(int* const pointer){
    if(pointer){
            *pointer -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vec){
    for_each(vec.begin(), vec.end(),[](std::shared_ptr<int> pointer) {
        sub10(pointer.get());
    });
}