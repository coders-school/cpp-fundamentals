#pragma once
#include <vector>
#include <memory>
#include <iostream>

//wygeneruje wektor wspóldzielonych wskazników na liczby od 0 do count
std::vector<std::shared_ptr<int>> generate(int count);

//przyjmie wektor i wypisze wszystkie elementy ze wskazników wektora
void print(std::vector<std::shared_ptr<int>>); 

//przyjmie wektor i doda do kazdej liczby 10
void add10(std::vector<std::shared_ptr<int>>);

//która przyjmie staly wskaznik na int i odejmie od tego elementu 10
void sub10(int* const);

//przyjmie wektor wspóldzielonych wskazników i wywola dla kazdego elementu powyzsze przeciazenie funkcji sub10()
void sub10(std::vector<std::shared_ptr<int>>);