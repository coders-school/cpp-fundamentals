#pragma once
#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> vect);
void add10(std::vector<std::shared_ptr<int>> vect);
void sub10(int * const wsk);
void sub10(std::vector<std::shared_ptr<int>> vect);