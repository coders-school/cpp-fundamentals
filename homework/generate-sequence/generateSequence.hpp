#pragma once


std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
	std::vector<int> vec;
	if((count <= 0)) return vec = {};
	for(size_t i=1; i<=count ;i++) vec.push_back(i*step);
    return vec;
}
