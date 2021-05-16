#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {

   int max;
   if (vec.empty()){
       return {};
   }
   for( auto el : vec){
       if(el > max){
           max = el;
       }
   }
   return {max};
}
