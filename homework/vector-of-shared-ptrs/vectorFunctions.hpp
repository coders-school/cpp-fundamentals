#pragma once
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int);
void print(const std::vector<std::shared_ptr<int>>);
void add10(std::vector<std::shared_ptr<int>>);
void sub10(std::vector<std::shared_ptr<int>>);
void sub10(int*);