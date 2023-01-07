#include <iostream>
#include <vector>
#include <memory>
#pragma once

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> shdptr);
void add10(std::vector<std::shared_ptr<int>> &shdptr);
void sub10(int * const wsk);
void sub10(std::vector<std::shared_ptr<int>> shdptr);
