#pragma once

#include <vector>
#include <memory>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count);

void print(std::vector<std::shared_ptr<int>> vec);

void add10(std::vector<std::shared_ptr<int>> vec);

void sub10(int * pnt);

void sub10(std::vector<std::shared_ptr<int>> vec);