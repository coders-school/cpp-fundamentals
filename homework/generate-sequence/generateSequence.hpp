#pragma once
#include<vector>
#include<algorithm>
#include<iostream>

std::vector<int> generateSequence(int count, int step) 
{
   if(count<0)
   {
   count = 0;
   }
   
   std::vector<int>v2(count);
   int s=step;
   int n=0;
   
   std::generate(v2.begin(),v2.end(),[&n,s]()
   {
   return n+= s;
   }
   );
   
   return v2;   
}
