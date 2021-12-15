#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

int NWD(long first, long second) {
	
	if (first < 0 )
		first = abs(first);
	
	if (second < 0)
		second = abs(second);
	
	if (first == 0 )
		return second;
	else if (second == 0)
		return first;
	
	std::vector<long> first_dividers;
	std::vector<long> second_dividers;
	
	for (long i{1}; i <= first; ++i ){
		if (!(first % i))
			first_dividers.push_back(i);
	}
	for (long i{1}; i <= second; ++i ){
		if (!(second % i))
			second_dividers.push_back(i);
	}
	
	if (first > second){
		for (long i{0}; i < second_dividers.size();++i) {
			for (long n : first_dividers) {
				if (second_dividers[second_dividers.size()-1-i] == n)
					return n;
			}
		}
	} else {
		for (long i{0}; i < first_dividers.size(); ++i) {
			for (long n : second_dividers) {
				if (first_dividers[first_dividers.size()-1-i] == n)
					return n;
			}
		}
	}
	return -1;
}

int NWW(long first, long second){
	
	if (first == 0 || second == 0)
		return 0;
	
	if (first < 0 )
		first = abs(first);
	
	if (second < 0)
		second = abs(second);
	
	long max_multipler = first * second;
	long NWW{1};
	
	if (first > second){
		for (long i{1}; i <= max_multipler; ++i) {
			NWW = first * i;
			if (!(NWW % second)){
				return NWW;
			}		
		}
		return NWW;
	} else {
		for (long i{1}; i <= max_multipler; ++i) {
				NWW = second * i;
				if (!(NWW % first)){
					return NWW;
				}		
			}
		return NWW;
	}
}
