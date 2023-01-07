#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count){

std::vector<std::shared_ptr<int>> vptr;

for(int i = 0; i < count; i++){
std::shared_ptr<int> ptr1 = std::make_shared<int>(i);
vptr.push_back(ptr1);
}

return vptr;

}


void print(std::vector<std::shared_ptr<int>> shdptr){

for(auto &k : shdptr){
std::cout << *k << std:: endl;
}
}


void add10(std::vector<std::shared_ptr<int>> &shdptr){

for(auto &k : shdptr){
if(k != nullptr){
*k = *k + 10;}
}
}

void sub10(int * const wsk){

if(wsk != nullptr){
*wsk = *wsk - 10;}
}

void sub10(std::vector<std::shared_ptr<int>> shdptr){


for(auto &k : shdptr){
sub10(k.get());

}
}


