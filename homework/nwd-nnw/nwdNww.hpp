#pragma once
#include <cmath>

int NWD(int lhs, int rhs)
{
    int border, stamp = 1, divider = 0;
    if(lhs<rhs)
    	border = abs(rhs);
    else
    	border = abs(lhs);
    while(stamp <= border)
    {
    	if(lhs % stamp == 0 && rhs % stamp == 0)
    		divider = stamp;
    	stamp++;
    }
    return divider;
}

int NWW(int lhs, int rhs)
{
    int border = lhs * rhs;
    int higherValue, lowerValue, stamp = 1;
    if(lhs<rhs)
    {
    	higherValue = abs(rhs);
    	lowerValue = abs(lhs);
    }
    else
    {
    	higherValue = abs(lhs);
    	lowerValue = abs(rhs);
    }

    while(stamp * higherValue < border)
    {
    	if((higherValue * stamp) % lowerValue == 0)
    		return (higherValue * stamp);
    	stamp++;
    }
    return abs(border);
}
