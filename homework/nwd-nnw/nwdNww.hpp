#pragma once

int NWD(int lhs, int rhs) {
    int temp;
    if(rhs < 0)
    {
        rhs = abs(rhs);
    }
    if(lhs < 0)
    {
        lhs = abs(lhs);
    }
    while(rhs)
    {
        temp = lhs % rhs;
        lhs = rhs;
        rhs = temp;
    }

   return lhs;
}

int NWW(int lhs, int rhs) {
    if(lhs < 0)
    {
        lhs = abs(lhs);
    }
    if(rhs < 0)
    {
        rhs = abs(rhs);
    }
    return ((lhs * rhs) / NWD(lhs, rhs));
}
