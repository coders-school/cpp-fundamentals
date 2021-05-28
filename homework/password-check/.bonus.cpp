#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

std::vector<ErrorCode> checkedPasswordRules(std::string str){
    
    std::vector<ErrorCode> vec;
    vec.reserve(4);

    if(str.size()<9){
        vec.push_back(static_cast<ErrorCode>(1));
    }

    if(std::none_of(str.cbegin(), str.cend(),
                    [](unsigned char c){ return std::isdigit(c);}) {
        vec.push_back(static_cast<ErrorCode>(2));
    }

    if(std::all_of(str.cbegin(), str.cend(),
                          [](unsigned char c){ return std::isalnum(c);}) {
        vec.push_back(static_cast<ErrorCode>(3));
    }


    if(std::none_of(str.cbegin(), str.cend(),
                       [](unsigned char c){ return std::isupper(c);}) {
        vec.push_back(static_cast<ErrorCode>(4));
    }
    
    if(vec.empty()){
        vec.push_back(static_cast<ErrorCode>(0));
    }

    return vec;
}




