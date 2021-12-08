#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>>temp_vector);
void add10(std::vector<std::shared_ptr<int>>temp_vector);
void sub10(std::vector<std::shared_ptr<int>>temp_vector);
void sub10(int* temp_ptr);
