#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int);

void print(std::vector<std::shared_ptr<int>>);

void add10(std::vector<std::shared_ptr<int>>);

void sub10(int* const ptr);

void sub10(std::vector<std::shared_ptr<int>>);
