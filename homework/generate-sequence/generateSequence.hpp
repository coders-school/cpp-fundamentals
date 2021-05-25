#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    std::vector<int>vec_seqe;
    int pom=step;
    for (int i = 1; i <= count; i++){
    vec_seqe.push_back(pom);
    pom += step;
    }
    return vec_seqe;
}
