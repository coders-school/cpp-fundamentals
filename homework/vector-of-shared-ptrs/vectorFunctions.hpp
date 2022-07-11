#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count);
void print(const std::vector<std::shared_ptr<int>> vecPrint); 
void add10(std::vector<std::shared_ptr<int>> vecAdd);
void sub10(int* const ptr);
void sub10(std::vector<std::shared_ptr<int>> vecSub);
