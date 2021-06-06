#pragma once

#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);    //która wygeneruje wektor współdzielonych wskaźników na liczby od `0` do `count`
void print(const std::vector<std::shared_ptr<int>> &vec); //która przyjmie wektor i wypisze wszystkie elementy ze wskaźników wektora
void add10(std::vector<std::shared_ptr<int>> &vec);       //która przyjmie wektor i doda do każdej liczby `10`
void sub10(int *const a);                                 // która przyjmie stały wskaźnik na `int` i odejmie od tego elementu `10`
void sub10(std::vector<std::shared_ptr<int>> &vec);       //Która przyjmie wektor współdzielonych wskaźników i wywoła dla każdego elementu powyższe przeciążenie funkcji `sub10()`