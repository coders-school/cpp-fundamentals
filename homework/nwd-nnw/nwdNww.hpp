#pragma once

int NWD(int lhs, int rhs) {
    while(lhs != rhs)
    {
        if(lhs < rhs)
        {
            rhs = rhs - lhs;
        }else{
            lhs = lhs - rhs;
        }
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    return ((lhs * rhs) / NWD(lhs, rhs));
}
