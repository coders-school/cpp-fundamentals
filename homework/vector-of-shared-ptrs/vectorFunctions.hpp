#pragma once
#include "memory"
#include "vector"

using VectorOfIntSharedPointers = std::vector<std::shared_ptr<int>>;

VectorOfIntSharedPointers generate(int count);
void print(const VectorOfIntSharedPointers& vec);
void add10(VectorOfIntSharedPointers& vec);
void sub10(int* const ptr);
void sub10(VectorOfIntSharedPointers& vec);
