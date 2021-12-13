#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate (const size_t count){
    std::vector<std::shared_ptr<int>> myVecOfSharedPtr;
    for(size_t i = 0; i < count; ++i){
        myVecOfSharedPtr.push_back(std::make_shared<int>(i));
    }
    return myVecOfSharedPtr;
}

void print(std::vector<std::shared_ptr<int>> vec){
    std::copy(vec.begin(),vec.end(),std::ostream_iterator<std::shared_ptr<int>>(std::cout));
}

void add10(std::vector<std::shared_ptr<int>> vec){
    for(auto element: vec){
        *element += 10;
    }
}
