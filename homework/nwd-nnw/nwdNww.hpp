#pragma once
#include <list>
#include <iostream>

std::list<int> intoPrimes(int);
void print(int,int);

int NWD(int lhs, int rhs) {
    auto primes_lhs=intoPrimes(lhs);
    auto primes_rhs=intoPrimes(rhs);
    // TODO: Implement me :)
    int CommonDiv =1;
    for(auto el_lhs = primes_lhs.begin();el_lhs != primes_lhs.end();el_lhs++) {
        for(auto el_rhs = primes_rhs.begin();el_rhs != primes_rhs.end();el_rhs++) {
            if (*el_lhs<*el_rhs) break;
            if (*el_lhs==*el_rhs!=0) {
                CommonDiv*=*el_lhs;
                *el_lhs=0;
                *el_rhs=0;
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
void print(int n) {
    std::cout<<"primes: ";
    for (auto el:intoPrimes(n)) std::cout<<el<<" ";
    std::cout<<"\n";
}

std::list<int> intoPrimes(int number)
{
    int n=2;
    int i=abs(number);
    std::list<int> primes;
    while (i>=n)  {
        while (i % n>  0)   n++;
        primes.push_back(n);
        i/=n;
        n=2;
    }    
    return primes;
}