#pragma
#include <vector>
#include <memory>

constexpr const int countNumber = 10;
std::vector<std::shared_ptr<int>> generate(int countNumber);
void print(std::vector<std::shared_ptr<int>> vec);
void add10(std::vector<std::shared_ptr<int>> vec);
void sub10(int* const element);
void sub10(std::vector<std::shared_ptr<int>> vec);