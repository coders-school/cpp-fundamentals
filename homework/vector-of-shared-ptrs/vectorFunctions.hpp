//
// Created by bartek on 6/29/21.
//

#ifndef ZADANIE_3__VECTORFUNCTIONS_HPP
#define ZADANIE_3__VECTORFUNCTIONS_HPP

#include <iostream>
#include <vector>
#include <memory>

class vectorFunctions {

};

std::vector<std::shared_ptr<int>> generate(int count);

void print (std::vector<std::shared_ptr<int>>&vec);

void add10(std::vector<std::shared_ptr<int>>&);

void sub10(int * ptr);

void sub10(std::vector<std::shared_ptr<int>>&);

#endif //ZADANIE_3__VECTORFUNCTIONS_HPP

/*
Napisz program, który zawierać będzie 5 funkcji.
1.Deklaracje powinny znaleźć się w pliku nagłówkowym vectorFunctions.hpp,
 a implementacje w pliku źródłowym vectorFunctions.cpp. Stwórz te pliki.

2.std::vector<std::shared_ptr<int>> generate(int count), która wygeneruje
wektor współdzielonych wskaźników na liczby od 0 do count - 1
3.void print() która przyjmie vector i wypisze wszystkie elementy ze wskaźników wektora
4.void add10() która przyjmie vector i doda do każdej liczby 10
5.void sub10() która przyjmie stały wskaźnik (zwykły) na int i odejmie od tego elementu 10
6.void sub10() Która przyjmie wektor współdzielonych wskaźników i wywoła dla każdego elementu powyższe przeciążenie funkcji sub10()


#endif //ZADANIE_3__VECTORFUNCTIONS_HPP


Napisz program, który zawierać będzie 5 funkcji.
1.Deklaracje powinny znaleźć się w pliku nagłówkowym vectorFunctions.hpp,
 a implementacje w pliku źródłowym vectorFunctions.cpp. Stwórz te pliki.

2.std::vector<std::shared_ptr<int>> generate(int count), która wygeneruje
wektor współdzielonych wskaźników na liczby od 0 do count - 1
3.void print() która przyjmie vector i wypisze wszystkie elementy ze wskaźników wektora
4.void add10() która przyjmie vector i doda do każdej liczby 10
5.void sub10() która przyjmie stały wskaźnik (zwykły) na int i odejmie od tego elementu 10
6.void sub10() Która przyjmie wektor współdzielonych wskaźników i wywoła dla każdego elementu powyższe przeciążenie funkcji sub10()
*/



