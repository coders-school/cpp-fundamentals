#pragma once
#include<iostream>

int NWD(int lhs, int rhs)
{
    if (rhs != 0)
        return NWD(rhs, lhs % rhs);

    return a;
}

int NWW(int lhs, int rhs)
{
    return (lhs / NWD(lhs, rhs) * rhs);
}

    
