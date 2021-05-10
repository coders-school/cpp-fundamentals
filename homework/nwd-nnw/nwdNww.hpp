#pragma once
int NWW(int lhs, int rhs) 
{
   int shs = lhs * rhs;
    while (lhs != rhs )
    {
        if(lhs > rhs){
       lhs -= rhs; }
        else{
       rhs -=lhs;
    }
    shs /= lhs;
    
    return shs;
}
}


int NWD(int lhs, int rhs) {
    int x;
    while (rhs)
    {
        x=rhs;
        rhs= lhs%rhs;
        lhs=x;
    }
    
    return lhs;
}

