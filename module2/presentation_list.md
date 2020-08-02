<!-- .slide: data-background="#111111" -->

# Podstawy C++

## `std::list<T>`

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Lista

### Pytanie: jakie cechy miał `std::vector<T>`?
<!-- .element: class="fragment fade-in" -->

Lista w przeciwieństwie do wektora jest porozrzucana po pamięci. Co czasami jest wygodne, gdyż możemy wykorzystać fragmenty pamięci,
które mogłyby, by być niedostępne dla wektora.
<!-- .element: class="fragment fade-in" -->

### Pytanie: skąd elementy listy wiedzą o swoim wzajemnym istnieniu?
<!-- .element: class="fragment fade-in" -->

Każdy element listy przechowuje wskaźnik na element następny (lista jedno kierunkowa) lub następny i poprzedni (lista dwukierunkowa).
<!-- .element: class="fragment fade-in" -->

___
<!-- .slide: style="font-size: 0.9em" -->

## Operacje na `std::list`

* <!-- .element: class="fragment fade-in" --> pobranie pierwszego i ostatniego elementu listy
  * `front()`
  * `back()`
* <!-- .element: class="fragment fade-in" --> początek i koniec mapy
  * `begin()`
  * `end()`
* <!-- .element: class="fragment fade-in" --> informacja o liczbie elementów w liście
  * `size()`
* <!-- .element: class="fragment fade-in" --> informacja czy lista jest pusta
  * `empty()`
* <!-- .element: class="fragment fade-in" --> dodanie elementu na koniec listy
  * `push_back()`
* <!-- .element: class="fragment fade-in" --> <b>NOWOŚĆ</b> dodanie elementu na początek listy
  * `push_front()`
* <!-- .element: class="fragment fade-in" --> <b>NOWOŚĆ</b> sortowanie elementów listy (nie możemy korzystać z <code>std::sort</code> dla listy)
  * `sort()`

[Dokumentacja na cppreference.org](https://en.cppreference.com/w/cpp/container/list)
<!-- .element: class="fragment fade-in" -->

___

## Pytanie: jak dostać się do 10 elementu listy?

Ponieważ każdy element listy wie tylko o poprzednim i następnym elemencie, nie możemy tak łatwo dostać się do 10 elementu listy.
<!-- .element: class="fragment fade-in" -->

Dostęp do pierwszego elementu możemy otrzymać przez `front()` lub `*begin()`
<!-- .element: class="fragment fade-in" -->

```cpp
int main() {
    std::list<int> list {1, 2, 3, 4, 5};
    std::cout << *list.begin();
    std::cout << list.front();
}
```
<!-- .element: class="fragment fade-in" --> 

___

Dostęp do 10 elementu możemy uzyskać przechodząc od 1 do 10.

```cpp
int main() {
    std::list<int> list {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = list.begin();
    for (size_t i = 0 ; i < 10 ; ++i) {
        ++it; // jump to next element
    }
    std::cout << *it;
}
```
<!-- .element: class="fragment fade-in" -->

Zajmuje to więcej czasu, niż dostanie się do 10 elementu w `std::vector`.
<!-- .element: class="fragment fade-in" -->

___

## Zadanie

Napisz funkcję, która przyjmuje wektor i zwraca listę, która zawiera posortowane wartości z wektora. [Pobierz zadanie][task3]

```cpp
#include <iostream>
#include <vector>

// Implement createSortedList
// It should take a vector and return a list of sorted elements
// add proper include :)

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
```

[task3]: https://github.com/coders-school/kurs_cpp_podstawowy/tree/module2/module2/task3.cpp

___

## Pytanie: kiedy opłaca się używać `std::list`, a kiedy `std::vector`?
