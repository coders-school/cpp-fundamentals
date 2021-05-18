#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)

    	std::vector<int> vect {};
	int sum {};
	if(count >= 0)
		for(size_t i=0; i<count; i++){
			sum += step;
			vect.push_back(sum);
		}

	return vect;
}
