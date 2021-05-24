#pragma once
#include <list>
#include <iostream>

std::list<int> intoPrimes(int);
void print(int,int);

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    print(lhs,rhs);
    int CommonDiv =1;
    for(auto el_lhs:intoPrimes(lhs)) {
        for(auto el_rhs:intoPrimes(rhs)) {
            if (el_lhs<el_rhs) break;
            if (el_lhs==el_rhs!=0) {
                CommonDiv*=el_lhs;
                el_lhs=0;
                el_rhs=0;
            }
        }
    }
 
    return CommonDiv;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    
    return lhs*rhs/NWD(lhs,rhs);
}




//*********************************************************
void print(int l,int r) {
    for (auto el:intoPrimes(l)) std::cout<<el<<" ";
    std::cout<<"\n";
    for (auto el:intoPrimes(r)) std::cout<<el<<" ";
    std::cout<<"\n";   
}

std::list<int> intoPrimes(int i)
{
    int n=2;
    std::list<int> primes;
    while (i>n)  {
        while (i % n>  0)   n++;
        primes.push_back(n);
        i/=n;
        n=2;
    }    
    return primes;
}