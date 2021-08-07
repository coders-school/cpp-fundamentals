#include <iostream>
#include <memory>
#include <vector>
#include <string>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> &v);
void add10(std::vector<std::shared_ptr<int>> &v);
void sub10(int* const v);
void sub10(std::vector<std::shared_ptr<int>> &v);
