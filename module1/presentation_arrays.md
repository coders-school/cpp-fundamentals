<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Tablice

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Wprowadzenie do tablic

# 🚃🚃🚃🚃🚃🚃🚃🚃🚃🚃

* <!-- .element: class="fragment fade-in" --> Tablice można traktować jak wagony w pociągu
* <!-- .element: class="fragment fade-in" --> Ustawione kolejno jeden po drugim i połączone ze sobą
* <!-- .element: class="fragment fade-in" --> Mogą pomieścić różne typy, jak człowiek, węgiel, itp.
* <!-- .element: class="fragment fade-in" --> 10 wagonów z węglem możemy zapisać jako `Coal tab[10]` - oznacza to, że tworzymy tablicę, która przechowuje 10 elementów typu Coal (węgiel).

___

<img width="600" data-src="img/array.gif" alt="Tablica w pamięci" class="plain">

* W C++ tablica znajduje się w jednym, ciągłym obszarze w pamięci i jest nierozłączna (nie można usuwać jej elementów)
* Wszystkie elementy są tego samego typu
* Tablica jest zawsze indeksowana od 0
* `tab[0]` - pierwszy element tablicy `tab`
* `tab[9]` - ostatni element 10-elementowej tablicy `tab`

___

## Przykład modyfikacji tablicy

```cpp
int tab[10];
tab[0] = 1;
tab[1] = 2;
// ...
tab[9] = 10;
```

Można to zrobić lepiej z użyciem pętli. <!-- .element: class="fragment fade-in" -->

___

### `operator[]`

Do elementu tablicy odwołujemy się przez `operator[]`. Musimy pamiętać, żeby zawsze odwoływać się do istniejącego elementu tablicy. Inaczej program będzie miał niezdefiniowane zachowanie, gdyż spróbujemy uzyskać dostęp do pamięci, która nie należy do tablicy. Mówimy, że znajdują się tam śmieci. W najlepszym przypadku system operacyjny to wykryje i dostaniemy <span class="fragment highlight-red">**crash** (segmentation fault)</span>. W najgorszym będziemy działać na niepoprawnych losowych danych. Skutki mogą być bardzo poważne (<span class="fragment highlight-red">katastrofy promów kosmicznych</span>, <span class="fragment highlight-red">napromieniowanie od aparatury medycznej</span>).

```cpp
int tab[10];
tab[10] = 42;  // !!! undefined behavior (UB)
```
<!-- .element: class="fragment fade-in" -->

___

## Zadanie

Zmodyfikuj program, tak aby wypełniał tablicę kolejnymi nieparzystymi liczbami: 1, 3, 5, 7, ... [Pobierz zadanie][zadanie-domowe]

```cpp
#include <iostream>

constexpr size_t tab_size = 100;

int main() {
    int tab[tab_size];

    for (size_t i = 0; i < tab_size; ++i) {
        tab[i] = i;
    }

    for (size_t i = 0; i < tab_size; ++i) {
        std::cout << tab[i] << "\n";
    }

    return 0;
}
```

[zadanie-domowe]: https://github.com/coders-school/kurs_cpp_podstawowy/blob/master/module1/task4.cpp