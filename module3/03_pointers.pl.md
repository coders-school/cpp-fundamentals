<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Wskaźniki

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Wskaźniki - analogia

Poza referencjami istnieją także wskaźniki. Wskaźniki działają podobnie jak referencje.
<!-- .element: class="fragment fade-in" -->

Wyobraźmy sobie, że planujemy wycieczkę na Majorkę. Wsiadamy do samolotu i lecimy.
Na miejscu okazuje się, ze zapomnieliśmy jaki jest adres hotelu 😦
W celu znalezienia go musimy zadzwonić do biura podróży, poczekać na obsługę, wytłumaczyć całą zawiłą historię, aż w końcu po długim czasie otrzymujemy adres naszego hotelu.
Proces zdobycia tych informacji był dla nas czasochłonny.
<!-- .element: class="fragment fade-in" -->

Wyobraźmy sobie jednak, że uprzednio zapisaliśmy sobie w telefonie adres naszego hotelu. Aby przypomnieć sobie, gdzie on się znajdował wystarczy, że sprawdzimy telefon i już wiemy. Proces ten zajął nam dużo mniej czasu.
<!-- .element: class="fragment fade-in" -->

___

## Wskaźniki w C++

Podobnie jest w C++. Wskaźniki służą do wskazywania miejsca w pamięci, gdzie znajduje się pożądany przez nas obiekt.
<!-- .element: class="fragment fade-in" -->

Procesor nie musi odpytywać każdorazowo magistrale pamięci, gdzie znajduje się podana zmienna, tylko od razu wie, jaki jest jej adres (unikamy pośredników jak telefon do biura obsługi).
<!-- .element: class="fragment fade-in" -->

Ponadto jeżeli funkcja przyjmuje wskaźnik, nie musi ona kopiować całej zawartości obiektu, co jest czasochłonne. Można dużo szybciej wskazać gdzie ten obiekt już istnieje.
<!-- .element: class="fragment fade-in" -->

___

### Jak przekazać element przez wskaźnik?

```cpp
void foo (int* num) {
    std::cout << *num;  // good
    *num += 2;          // good
}
```
<!-- .element: class="fragment fade-in" -->

Gdy chcemy mieć pewność, że nikt nie zmodyfikuje nam wartości (chcemy ją przekazać tylko do odczytu) dodajemy `const`.
<!-- .element: class="fragment fade-in" -->

```cpp
void bar (int const* num) {
    std::cout << *num;  // good
    *num += 2;          // compilation error, num is a pointer to const
}
```
<!-- .element: class="fragment fade-in" -->

Wywołanie funkcji to:
<!-- .element: class="fragment fade-in" -->

```cpp
  int num = 5;
  foo(&num);
  bar(&num);
```
<!-- .element: class="fragment fade-in" -->

___

## Gdzie dać `const`?

### Co to jest?

```cpp
const int * ptr;
```
<!-- .element: class="fragment fade-in" -->

Wskaźnik na stałą (`const int`).
<!-- .element: class="fragment fade-in" -->

```cpp
int const * ptr;
```
<!-- .element: class="fragment fade-in" -->

Również wskaźnik na stałą (`const int = int const`).
<!-- .element: class="fragment fade-in" -->

```cpp
int * const ptr;
```
<!-- .element: class="fragment fade-in" -->

Stały wskaźnik na zmienną (`int`).
<!-- .element: class="fragment fade-in" -->

___

## Stałe wskaźniki a wskaźniki na stałe

```cpp
int const * const ptr;
const int * const ptr;
```
<!-- .element: class="fragment fade-in" -->

Stały wskaźnik na stałą (`int const = const int`).
<!-- .element: class="fragment fade-in" -->

Jest to częste pytanie z rozmów kwalifikacyjnych. Aby stały był wskaźnik, `const` musi być za gwiazdką.
<!-- .element: class="fragment fade-in" -->

___

## Różnice

### Wskaźnik na stałą

```cpp
const int * ptr = new int{42};
*ptr = 43;     // compilation error: assignment of read-only location ‘* ptr’
ptr = nullptr; // ok
```

* <!-- .element: class="fragment fade-in" --> Nie możemy zmodyfikować obiektu wskazywanego przez wskaźnik
  * Odwołania z `*` nie mogą modyfikować obiektu
* <!-- .element: class="fragment fade-in" --> Możemy zmodyfikować sam wskaźnik, np. aby wskazywał na inny obiekt
  * Odwołania bez `*` mogą modyfikować wskaźnik

___

## Różnice

### Stały wskaźnik

```cpp
int * const ptr = new int{42};
*ptr = 43;     // ok
ptr = nullptr; // compilation error: assignment of read-only variable ‘ptr’
```

* <!-- .element: class="fragment fade-in" --> Możemy zmodyfikować obiekt wskazywany przez wskaźnik
  * Odwołania z `*` mogą modyfikować obiekt
* <!-- .element: class="fragment fade-in" --> Nie możemy zmodyfikować samego wskaźnika, np. aby wskazywał na inny obiekt
  * Odwołania bez `*` nie mogą modyfikować wskaźnika

___

### Stały wskaźnik na stałą

```cpp
const int * const ptr = new int{42};
*ptr = 43;     // compilation error: assignment of read-only location ‘* ptr’
ptr = nullptr; // compilation error: assignment of read-only variable ‘ptr’
```

* <!-- .element: class="fragment fade-in" --> Nie możemy zmodyfikować obiektu wskazywanego przez wskaźnik
  * Odwołania z `*` nie mogą modyfikować obiektu
* <!-- .element: class="fragment fade-in" --> Nie możemy zmodyfikować samego wskaźnika, np. aby wskazywał na inny obiekt
  * Odwołania bez `*` nie mogą modyfikować wskaźnika

___
<!-- .slide: style="font-size: 0.9em" -->

## Zadanie

Zaimplementuj funkcje `foo()` i `bar()`.

`foo()` powinno zmodyfikować wartość przekazaną przez wskaźnik na 10, a `bar()` na 20.

Czy `foo()` lub `bar()` mogą przyjąć wskaźnik na stałą lub stały wskaźnik?

```cpp
#include <iostream>

// TODO: Implement foo() and bar()
// foo() should modify value under passed pointer to 10
// bar() should modify value under passed pointer to 20
// Can we have a pointer to const or a const pointer?
int main() {
    int number = 5;
    int* pointer = &number;
    std::cout << number << '\n';
    foo(&number);
    std::cout << number << '\n';
    bar(pointer);
    std::cout << number << '\n';

    return 0;
}
```

___
<!-- .slide: style="font-size: 0.9em" -->

## Różnice między wskaźnikiem i referencją

### Odwołania <!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> Do referencji odwołujemy się tak samo jak do zwykłego obiektu - za pomocą nazwy
* <!-- .element: class="fragment fade-in" --> Aby uzyskać element wskazywany przez wskaźnik musimy dodać <code>*</code> przed nazwą wskaźnika

### Przekazywanie jako argument <!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> Argument jest referencją lub zwykłą zmienną (kopią) - przekazujemy nazwę
* <!-- .element: class="fragment fade-in" --> Argument jest wskaźnikiem a przekazujemy zmienną - musimy dodać <code>&</code> przed nazwą zmiennej.

### Oznaczenia <!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> Symbol <code>*</code> (operator dereferencji) oznacza dostęp do obiektu wskazywanego
* <!-- .element: class="fragment fade-in" --> Jeżeli nie damy <code>*</code> przy wskaźniku dostaniemy adres obiektu wskazywanego
* <!-- .element: class="fragment fade-in" --> Symbol <code>&</code> oznacza pobranie adresu naszej zmiennej
* <!-- .element: class="fragment fade-in" --> Powyższe ma sens, ponieważ wskaźnik wskazuje miejsce w pamięci (adres wskazywanego obiektu)

___

## Różnice w kodzie

```cpp
void copy(int a) { a += 2; }
void ref(int& a) { a += 2; }
void ptr(int* a) ( *a += 2; )

void example() {
    int c = 10;
    int& r = a;
    int* p = &a;  // typically int* p = new int{10};
    copy(c);
    copy(r);
    copy(*p);
    ref(c);
    ref(r);
    ref(*p);
    ptr(&c);
    ptr(&r);
    ptr(p);
}
```

___

## Co oznacza `*` w kodzie?

```cpp
int a = 5 * 4;      // jako operacja arytmetyczna - mnożenie
int* b = &a;        // przy typie - wskaźnik na ten typ
int *c = &a;        // przy typie - wskaźnik na ten typ
std::cout << *b;    // przy zmiennej wskaźnikowej - dostęp do obiektu
int fun(int* wsk);  // w argumencie funkcji - przekazanie wskaźnika (adresu)
```
<!-- .element: class="fragment fade-in" -->

## Co oznacza `&` w kodzie?
<!-- .element: class="fragment fade-in" -->

```cpp
int a = 5 & 4;      // jako operacja arytmetyczna - suma bitowa
int& b = a;         // przy typie - referencja na ten typ
int &c = a;         // przy typie - referencja na ten typ
std::cout << &a;    // przy zmiennej - adres tej zmiennej w pamięci
int fun(int& ref);  // w argumencie funkcji - przekazanie adresu
```
<!-- .element: class="fragment fade-in" -->

___

## Ważna zasada

Jeśli nie ma absolutnej potrzeby, to nie używamy wskaźników w ogóle.
