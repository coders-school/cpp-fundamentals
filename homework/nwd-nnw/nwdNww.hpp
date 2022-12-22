#pragma once

int NWD(int lhs, int rhs) {
    if(lhs < 0)
    {
        lhs = -lhs;   
    }
    if(rhs < 0)
    {
        rhs = -rhs;   
    }

    if(lhs > rhs) 
    {
        return NWD(rhs, lhs);
    }
    else
    {
        if(lhs == 0 && rhs == 0) 
        {
            return 0;
        }
        else if(lhs == 0)
        {
            return rhs;
        }
        else{
            return NWD(rhs % lhs, lhs);
        }
    }
}

int NWW(int lhs, int rhs) {
    if(lhs < 0)
    {
        lhs = -lhs;   
    }
    if(rhs < 0)
    {
        rhs = -rhs;   
    }
    if(lhs == 0 && rhs == 0)
    {
            return 0;
    }
    else{
        return (lhs * rhs) / NWD(lhs, rhs);
    }
}
