#pragma once

int NWD(int lhs, int rhs) { //Największy Wspólny Dzielnik
    
    int nwd = 1;
    int iterations;
    if(lhs < 0) lhs*= -1;
    if(rhs < 0) rhs*= -1;

    if( !lhs || !rhs )
    {
        if(!lhs)    return rhs;
        else        return lhs;
    }

    if (lhs <= rhs)
    {
        iterations = lhs;
    }
    else iterations = rhs;

    for(int i = 2; i <= iterations; i++)
    {
        if( !(lhs%i) && !(rhs%i) )      nwd = i;
    }

    return nwd;
}

int NWW(int lhs, int rhs) { //Najmniejszą Wspólną Wielokrotność
    int nww;
    int biggest;

    if( !lhs || !rhs )                  return 0;

    if(lhs < 0) lhs*= -1;
    if(rhs < 0) rhs*= -1;

    if( !(lhs%rhs) && (lhs >= rhs) )    return lhs;
    if( !(rhs%lhs) && (rhs >= lhs) )    return rhs;

    biggest = lhs * rhs;

    for(int i = biggest; i > 0; i-=lhs)
    {
        if( !(i % lhs) && !(i % rhs))   nww = i;
    }

    for(int i = biggest; i > 0; i-=rhs)
    {
        if( !(i % lhs) && !(i % rhs))
        { 
        if(nww>i) nww = i;
        }    
    }

    return nww;
}
