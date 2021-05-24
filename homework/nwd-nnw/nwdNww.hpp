#pragma once
#include <list>
#include <iostream>

std::list<int> intoPrimes(int);
int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    for (auto el:intoPrimes(lhs)) std::cout<<el<<" ";
    std::cout<<"\n";
    for (auto el:intoPrimes(rhs)) std::cout<<el<<" ";
    std::cout<<"\n";    
    return -1;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
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