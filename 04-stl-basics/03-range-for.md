<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Pętla `for` po kolekcji

<a href="https://coders.school">
    <img width="500" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Zakresy

* <!-- .element: class="fragment fade-in" --> Każdy kontener (w tym również tablica, czy wektor) posiada swój koniec i początek
  * funkcja `begin()` zwraca początek kontenera
  * funkcja `end()` zwraca koniec kontenera
  * (w dużym uproszczeniu, temat rozszerzymy przy iteratorach)

___

## Range based `for` loop

Dzięki informacji o początku i końcu zakresu, możemy napisać pętlę iterującą po całym zakresie kontenera.
<!-- .element: class="fragment fade-in" -->

```cpp
for (auto i = vec.begin(); i != vec.end(); ++i) {
    auto element = *i;
    // do sth on element
}
```
<!-- .element: class="fragment fade-in" -->

Taki zapis jest jednak niepotrzebnie złożony i mało czytelny. <!-- .element: class="fragment fade-in" -->
Dlatego powstały `range loop`, które umożliwiają łatwy zapis `for (typ nazwa : kontener)`.
<!-- .element: class="fragment fade-in" -->
Kompilator może sam go wygenerować powyższy kod, jeśli użyjemy poniższego zapisu. <!-- .element: class="fragment fade-in" -->

```cpp
for (auto element : vec) {
    // do sth on element
}
```
<!-- .element: class="fragment fade-in" -->

___

## Zadanie

Napisz funkcję `printVector`, która przyjmie jako argument `std::vector<std::string>` i wypisze jego zawartość przy użyciu pętli for po kolekcji. Każdy element w nowej linii. [Pobierz zadanie][task1]

```cpp []
#include <iostream>
#include <vector>
#include <string>

// Implement printVector

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}
```

[task1]: ../04-stl-basics/tasks/01-printVector.cpp

___

## Zadanie

Napisz funkcję `concatenateVector`, która przyjmie jako argumenty 2 wektory a następnie zwróci jeden, który będzie zawierał naprzemiennie elementy z pierwszego i drugiego wektora. Np. dla poniższych vec1 i vec2 powinna zwrócić: `{1, 11, 2, 12, 3, 13, 4, 14, 5, 15}`. [Pobierz zadanie][task2]

```cpp []
#include <iostream>
#include <vector>

// Implement concatenateVector

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
```

[task2]: ../04-stl-basics/tasks/02-concatenateVector.cpp
