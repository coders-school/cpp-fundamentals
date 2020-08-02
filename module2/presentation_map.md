<!-- .slide: data-background="#111111" -->

# Podstawy C++

## `std::map<K, V>`

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Mapa, słownik

* mapa to zbiór par (klucz - Key, wartość - Value)
* `std::map` w C++ to odpowiednik `dict` z Pythona

Przykładowo tworzymy kolekcję ulubionych płyt i układamy je w szafce.
<!-- .element: class="fragment fade-in" --> 
Oczywiście płyt tych mamy ogromną liczbę i chcielibyśmy móc łatwo odnaleźć płytę, gdy będziemy jej poszukiwać.
<!-- .element: class="fragment fade-in" --> 
W tym celu numerujemy sobie wszystkie płyty i zapisujemy sobie na kartce informacje, pod jakim numerem znajduje się określony tytuł. W ten sposób tworzymy właśnie mapę.
<!-- .element: class="fragment fade-in" --> 

```cpp
std::map<size_t, std::string> discs {
    {1, "The Lord of the Rings: The Fellowship of the Ring"},
    {2, "The Lord of the Rings: The Two Towers"},
    {3, "The Lord of the Rings: The Return of the King"}
};
```
<!-- .element: class="fragment fade-in" --> 

Kluczem jest tutaj numer, natomiast wartością jest tytuł filmu.
<!-- .element: class="fragment fade-in" --> 

___

## Operacje na `std::map`

* <!-- .element: class="fragment fade-in" --> początek i koniec zakresu
  * `begin()`
  * `end()`
* <!-- .element: class="fragment fade-in" --> informacje o liczbie elementów w mapie
  * `size()`
* <!-- .element: class="fragment fade-in" --> informacja czy mapa jest pusta
  * `empty()`
* <!-- .element: class="fragment fade-in" --> dostęp do elementu dla określonego klucza
  * `operator[key]`
* <!-- .element: class="fragment fade-in" --> dodanie parę (klucz, wartość) do mapy o ile taka para jeszcze w niej nie występuje
  * `insert({key, value})`

[Dokumentacja na cppreference.org](https://en.cppreference.com/w/cpp/container/map)
<!-- .element: class="fragment fade-in" -->


___

## Pytanie

Co się wydarzy, gdy zawołamy na wspomnianej mapie:

```cpp
discs[4] = "Harry Potter";
```

Przypisanie czegoś do elementu mapy poprzez `operator[]` sprawia, że:
<!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> jeżeli istnieje już wartość dla danego klucza to ją podmienimy.
* <!-- .element: class="fragment fade-in" --> gdy nie istnieje wartość dla danego klucza, to utworzymy nową parę (klucz, wartość)

___
<!-- .slide: style="font-size: 0.8em" -->

## Wykonajmy ten kod

```cpp
#include <iostream>
#include <map>
#include <string>

void Print(const std::map<size_t, std::string>& map) {
    for (const auto& pair : map) {
        std::cout << pair.first << " | " << pair.second << '\n';
    }
}

int main() {
    std::map<size_t, std::string> discs {
        {1, "The Lord of the Rings: The Fellowship of the Ring"},
        {2, "The Lord of the Rings: The Two Towers"},
        {3, "The Lord of the Rings: The Return of the King"}
    };

    Print(discs);
    std::cout << "\nAfter adding a new element\n";
    discs[4] = "Harry Potter";
    Print(discs);
    std::cout << "\nAfter modification of an element\n";
    discs[4] = "Harry Potter and the Philosopher's Stone";
    Print(discs);
}
```

___

## Wynik

```txt
1 | The Lord of the Rings: The Fellowship of the Ring
2 | The Lord of the Rings: The Two Towers
3 | The Lord of the Rings: The Return of the King

After adding a new element
1 | The Lord of the Rings: The Fellowship of the Ring
2 | The Lord of the Rings: The Two Towers
3 | The Lord of the Rings: The Return of the King
4 | Harry Potter

After modification of an element
1 | The Lord of the Rings: The Fellowship of the Ring
2 | The Lord of the Rings: The Two Towers
3 | The Lord of the Rings: The Return of the King
4 | Harry Potter and the Philosopher's Stone
```

___
<!-- .slide: style="font-size: 0.9em" -->

## Zadanie

Napisz funkcję, która przyjmuje `std::vector<int>` oraz `std::list<std::string>` i zwraca mapę `std::map<int, std::string>`. [Pobierz zadanie][task4]

```cpp
#include <iostream>
#include <list>
#include <string>
#include <vector>

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list


int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
```

[task4]: https://github.com/coders-school/kurs_cpp_podstawowy/tree/module2/module2/task4.cpp
