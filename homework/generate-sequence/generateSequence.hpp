#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> generate;
    int j = 0;
        for (int i= 0; i<count; i++){
        j=j+step;
        generate.push_back(j);
        }
            return generate;
}
