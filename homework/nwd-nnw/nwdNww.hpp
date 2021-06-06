#pragma once


int NWD(int a, int b)
{
    if(b!=0)
    	return NWD(b,a%b);
    else 
        return std::abs(a);
}

int NWW(int a, int b) 
{   
    int var = NWD(a,b);
    if(var == 0)
        return 0;
    else
        return std::abs((a * b) / NWD(a, b));
}
