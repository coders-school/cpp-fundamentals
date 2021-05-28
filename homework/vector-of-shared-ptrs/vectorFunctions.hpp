#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "vectorFunctions.cpp"

std::vector <std::shared_ptr<int>> generate (int count);
void print (std::vector <std::shared_ptr<int>> print);
void add10 (std::vector <std::shared_ptr<int>> add);
void sub10 (int* const sub);
void sub10 (std::vector <std::shared_ptr<int>> sub10);void sub10 (const int* sub);