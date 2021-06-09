#include <string>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);

void print(std::vector<std::shared_ptr<int>>  vec);

void add10(std::vector<std::shared_ptr<int>>  vec);

void sub10(int* const vec);

void sub10(std::vector<std::shared_ptr<int>> vec);
