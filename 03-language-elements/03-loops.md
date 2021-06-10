<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Pętle

<a href="https://coders.school">
    <img width="500" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Pętle

Pętla służy do powtarzania instrukcji, które chcemy by się wykonały więcej niż raz bez konieczności ich wielokrotnego pisania w kodzie.

Podstawowe pętle: `while`, `for`

___

## Pętla `while`

`while` używamy, gdy chcemy coś wykonać dopóki nie zostanie spełniony jakiś warunek. Przeważnie nie mamy pojęcia, kiedy to nastąpi (nie znamy liczby kroków) np:

* Przeglądamy koszule w Internecie dopóki nie znajdziemy pasującej do nas <!-- .element: class="fragment fade-in" -->
* Powtarzamy walkę z tym samym bossem aż go nie pokonamy <!-- .element: class="fragment fade-in" -->
* Jemy zupę, aż talerz nie będzie pusty <!-- .element: class="fragment fade-in" -->
* Przeszukujemy kontakty w telefonie aż nie znajdziemy interesującej nas osoby <!-- .element: class="fragment fade-in" -->

___

### Konstrukcja pętli `while`

```cpp
while (condition) {
    // Do sth
}
```

### Przykład <!-- .element: class="fragment fade-in" -->

```cpp
while (a == b) {
    std::cin >> a;
    std::cin >> b;
}
```
<!-- .element: class="fragment fade-in" -->

___

## Pętla `for`

`for` używamy, gdy chcemy coś wykonać określoną liczbę razy. Przeważnie znamy liczbę kroków np:

* <!-- .element: class="fragment fade-in" --> Wypełniamy ankietę składającą się z 10 pytań -> liczba kroków 10
* <!-- .element: class="fragment fade-in" --> Przemieszczamy się z punktu A do B -> liczba kroków = dystans / długość kroku
* <!-- .element: class="fragment fade-in" --> Piszemy egzamin składający się z 4 zadań -> liczba kroków (jak umiemy to 4, jak nie to jeszcze wykonujemy podprogram <code>ściągaj</code>)
* <!-- .element: class="fragment fade-in" --> Zapinamy koszule (o ile nie wyrwiemy żadnego guzika)

___

### Konstrukcja pętli `for`

```cpp
for (variable = initial_value; condition; variable_change) {
    // Do sth
}
```

### Przykład <!-- .element: class="fragment fade-in" -->

```cpp
for (size_t i = 0; i < 10; i += 2) {
    std::cout << "i: " << i << '\n';
}
```
<!-- .element: class="fragment fade-in" -->

___

Każdą pętlę `for` można zamienić na `while` i odwrotnie. Wybieramy wygodniejszy dla nas zapis, zazwyczaj w zależności od znajomości liczby kroków.

Istnieje jeszcze jeden rodzaj pętli. Jaki?

___

## Pętla `do/while`

```cpp
do {
    // Do sth
} while(condition);
```

Kod w pętlach `while` lub `for` może się nie wykonać ani razu, gdy warunek nie będzie nigdy spełniony.

Kod w pętli `do/while` wykona się co najmniej raz.

___

## Zadanie

Dopisz funkcję `printString`. Ma ona wypisywać tekst podany jako pierwszy argument tyle razy, jaka jest wartość liczby podanej jako drugi argument. [Pobierz zadanie][zadanie-domowe]

```cpp
#include <iostream>

// Write your function here

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}
```

[zadanie-domowe]: ../03-language-elements/tasks/03-printString.cpp
