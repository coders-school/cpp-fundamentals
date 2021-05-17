#pragma once
#include<cmath>
#include<algorithm>


int NWD(int lhs, int rhs) 
{
    int r=0;
    lhs=abs(lhs);
    rhs=abs(rhs);
    
    while(rhs>0)
    {
    	r=lhs%rhs;
    	lhs=rhs;
    	rhs=r;
    }
    return lhs;
}

int NWW(int lhs, int rhs)
 {
    
    int a = std::max(lhs,rhs);
    int b = std::min(lhs,rhs);
    a = abs(a);
    b = abs(b);
    int c = a;
    
    if((a==0)||(b==0))
    {
    return 0;
    }
    else
    {
   	 while(a%b != 0)
   	 {
   	 a=a+c;
   	 }
    	return a;
    }
       
}
