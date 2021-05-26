#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
    
    auto result = 0;
    auto range = 0;

    if (lhs == 0){
        range = std::abs(rhs);
    }else if(rhs == 0){
        range = std::abs(lhs);
    }else if(lhs > rhs){
        range = std::abs(rhs);
    }else{
        range = std::abs(lhs);
    }

    for (auto i=1; i <= range; ++i){
        if(lhs%i == 0 and rhs%i == 0){
            result = i;
        }
    }


    return result;
}

int NWW(int lhs, int rhs) {
    
    auto result = 0;
    auto divide_rest = 0;
    auto multiple = 0;

    while (divide_rest != 0)
    {
        multiple += lhs;
        divide_rest = multiple % rhs

    }
    result = multiple;
    return result;
}
