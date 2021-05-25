<!-- .slide: data-background="#111111" -->

# Podstawy C++

## `std::vector<T>`

<a href="https://coders.school">
    <img width="500" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Cechy `std::vector<T>`

* <!-- .element: class="fragment fade-in" --> bardzo powszechnie używany
* <!-- .element: class="fragment fade-in" --> dynamiczna tablica
* <!-- .element: class="fragment fade-in" --> nie musimy z góry precyzować ile ma być elementów
* <!-- .element: class="fragment fade-in" --> znajduje się w jednym, ciągłym obszarze pamięci (tak jak tablica)
* <!-- .element: class="fragment fade-in" --> sam zarządza pamięcią
  * zadba o alokację nowej pamięci, gdy będzie to potrzebne
  * zadba o dealokację pamięci, gdy już jej nie będziemy potrzebować

___

## Utworzenie wektora

```cpp
std::vector<int> numbers;
```

* <!-- .element: class="fragment fade-in" --> wektor zawsze musi wiedzieć jakiego typu przechowuje dane
* <!-- .element: class="fragment fade-in" --> typ danych podajemy w nawiasach trójkątnych <code><></code>

___

## Inicjalizacja wektora wartościami <!-- .element: class="fragment fade-in" -->

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
std::vector<int> numbers {1, 2, 3, 4, 5};
```
<!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> oba typy inicjalizacji (z = i bez) są równoważne w przypadku wektora

___

## Operacje na wektorze

* <!-- .element: class="fragment fade-in" --> dodanie elementu do wektora (na końcu kontenera)
  * `numbers.push_back(5)`
* <!-- .element: class="fragment fade-in" --> odczytanie elementu z wektora
  * `numbers[1]`
* <!-- .element: class="fragment fade-in" --> przypisanie wielu elementów do wektora
  * `numbers = {1,2,3,4,5}`
* <!-- .element: class="fragment fade-in" --> pobieranie pierwszego elementu z wektora
  * `numbers.front()`
* <!-- .element: class="fragment fade-in" --> pobieranie ostatniego elementu z wektora
  * `numbers.back()`

[Dokumentacja na cppreference.org](https://en.cppreference.com/w/cpp/container/vector)
<!-- .element: class="fragment fade-in" -->
