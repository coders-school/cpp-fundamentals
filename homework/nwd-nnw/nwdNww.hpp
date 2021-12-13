#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

int NWD(int first, int second) {
	
	if (first <= 0 || second <= 0)
		return -1;
	
	std::vector<int> first_dividers;
	std::vector<int> second_dividers;
	
	for (short i{1}; i <= first; ++i ){
		if (!(first % i))
			first_dividers.push_back(i);
	}
	for (short i{1}; i <= second; ++i ){
		if (!(second % i))
			second_dividers.push_back(i);
	}
	
	if (first > second){
		for (short i{0}; i < second_dividers.size();++i) {
			for (int n : first_dividers) {
				if (second_dividers[second_dividers.size()-1-i] == n)
					return n;
			}
		}
	} else {
		for (short i{0}; i < first_dividers.size(); ++i) {
			for (int n : second_dividers) {
				if (first_dividers[first_dividers.size()-1-i] == n)
					return n;
			}
		}
	}
	return -1;
}

int NWW(int first, int second){
	
	if (first <= 0 || second <= 0)
		return -1;
	
	int max_multipler = first * second;
	int NWW{1};
	
	if (first > second){
		for (short i{1}; i <= max_multipler; ++i) {
			NWW = first * i;
			if (!(NWW % second)){
				return NWW;
			}		
		}
		return NWW;
	} else {
		for (short i{1}; i <= max_multipler; ++i) {
				NWW = second * i;
				if (!(NWW % first)){
					return NWW;
				}		
			}
		return NWW;
	}
}
}
