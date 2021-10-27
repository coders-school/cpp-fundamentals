#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> a);
void add10(std::vector<std::shared_ptr<int>> a);
void sub10(int * const a);
void sub10(std::vector<std::shared_ptr<int>> a);