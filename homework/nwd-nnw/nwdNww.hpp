#pragma once
#include <vector>
#include <numeric>

int NWD(int lhs, int rhs) {

    int result;
    
    result = std::gcd(lhs, rhs);
    
    return result;
    
    
    /*
    std::vector <int> dividers_lhs;
    std::vector <int> dividers_rhs;
    
    int result;
    if (lhs == 0) {
        return rhs;
    } else if (rhs == 0) {
        return lhs;
    } else if (((lhs % rhs ) || (rhs % lhs)) == 0)  {
        if (lhs <= rhs ) {
            return lhs;
        } else {
            return rhs;
        }
    }
    
    
    for (int i = 1; i <= lhs; i++)  {
        if ((lhs % i) == 0) {
            dividers_lhs.push_back(i);
        }
    }

    for (int i = 1; i <= rhs; i++)  {
        if ((rhs % i) == 0) {
            dividers_rhs.push_back(i);
        }
    }
    
    */
    
    
    return -1;
}

int NWW(int lhs, int rhs) {
    int result;
    
    if ((lhs || rhs) == 0) {
        return 0;
    }
    
    result = std::abs((lhs * rhs) / (NWD(lhs, rhs)))
    ;
    return result;
}
