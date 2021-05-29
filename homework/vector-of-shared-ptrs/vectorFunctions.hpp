#pragma once
#include <vector>
#include<iostream>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>>vec2);
void add10(std::vector<std::shared_ptr<int>>vec2);
void sub10(int* const wsk);
void sub10(std::vector<std::shared_ptr<int>>vec2);