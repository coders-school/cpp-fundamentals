#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    	int x = vec[0];
	for (int i = 1; i < vec.size(); i++){
		if (x < vec[i]) {
	  	    x = vec[i];
		}
		else {
		    x = x;
		}
	}
	return x;
}
