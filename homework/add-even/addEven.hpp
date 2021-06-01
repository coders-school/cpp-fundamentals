#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum{0};
for(int i=0;i<numbers.size(); ++i){
 if(numbers[i]%2==0)
 sum=sum+numbers[i];  
}
return sum;
}
 
