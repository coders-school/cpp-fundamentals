#pragma once
#include <vector>
#include <iostream>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> seq_vec {};
    if (count > 0) {
        for (int i=0; i<count; i++) {
            int el = step * (i+1);
            seq_vec.push_back(el);
        }
    }
    return seq_vec;
}
