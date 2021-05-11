#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.
auto concatenateVector(std::vector<int> in1, std::vector<int> in2){
	std::vector<int> out;
	int i_max;

	if (in1.size() > in2.size()) {
		i_max = in1.size();
	}else{
		i_max = in2.size();
	}

	for(auto i=0;i<i_max;++i){
		out.push_back(in1[i]);
		out.push_back(in2[i]);
	}
	return out;
}

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
