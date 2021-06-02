#pragma once
#include <vector>
#include <memory>
#include <iostream>

//wygeneruje wektor wsp�ldzielonych wskaznik�w na liczby od 0 do count
std::vector<std::shared_ptr<int>> generate(int count);

//przyjmie wektor i wypisze wszystkie elementy ze wskaznik�w wektora
void print(std::vector<std::shared_ptr<int>>); 

//przyjmie wektor i doda do kazdej liczby 10
void add10(std::vector<std::shared_ptr<int>>);

//kt�ra przyjmie staly wskaznik na int i odejmie od tego elementu 10
void sub10(int* const);

//przyjmie wektor wsp�ldzielonych wskaznik�w i wywola dla kazdego elementu powyzsze przeciazenie funkcji sub10()
void sub10(std::vector<std::shared_ptr<int>>);