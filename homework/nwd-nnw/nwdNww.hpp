#pragma once

int NWD(int lhs, int rhs) {
    while(lhs != rhs)
    {
        if (lhs > rhs){
            lhs -= rhs;
        }
        else{
            rhs -= lhs;
        }
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // int temp, result;
    // result = lhs * rhs;
    // while(rhs != 0)
    // {
    //     temp = rhs;
    //     rhs = lhs % rhs;
    //     lhs = temp;
    // }
    // result /= lhs;
    // return result;
}