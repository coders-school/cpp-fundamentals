#pragma once
  
 int NWD(int lhs, int rhs) {
 
     while(lhs!=rhs)
        if(lhs>rhs)
            lhs-=rhs; //lub a = a - b;
        else
            rhs-=lhs; //lub b = b-a
     return lhs; // lub b - obie zmienne przechowują wynik NWD(a,b)
     return rhs;
 }
 
 int NWW(int lhs, int rhs) {
  if (lhs < rhs)
     return NWW(rhs, lhs);
   int k = lhs;
   while (k % rhs != 0)
     k += lhs;
   return k;
 }
