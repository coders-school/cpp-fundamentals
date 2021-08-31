<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Opisy zadań

<a href="https://coders.school">
    <img width="500px" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Praca domowa

### Post-work

* Poczytaj dokumentację [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string). Znajdziesz tam m.in. opis funkcji `std::to_string`. Przyda się 🙂
* Calculate (6 XP)
* Fibonacci - rekurencja i iteracja (6 XP)
* NWD i NWW (6 XP)

Opisy za chwilę 🙂 Znajdziesz je też w repo [➡️ Zadania w repo](https://github.com/coders-school/cpp-fundamentals/tree/master/05-recap-homework)

#### Bonus za punktualność

* **19.05.2021 (środa)** to ostatni dzień na zebranie bonusowych punktów za punktualność
* **3 XP** wpadną Ci za każde zadanie dostarczone w terminie (razem aż 9 punktów)

___

### Pre-work

Wykonaj te zadania, aby lepiej przygotować się do kolejnych lekcji

* Poczytaj dokumentację typu [`std::vector`](https://en.cppreference.com/w/cpp/container/vector). Poklikaj na różne funkcje i patrz głównie na przykłady użycia na samym dole stron.
* Możesz przyjrzeć się plikom z testami w zadaniach i spróbować dopisać własne przypadki testowe

___
<!-- .slide: style="font-size: 0.75em" -->

## Calculate

Zaimplementuj funkcję, której zadaniem ma być wykonywanie działań arytmetycznych na dwóch liczbach.

Sygnatura - `std::string calculate(const std::string& command, int first, int second)`.

### Parametry

* `const std::string& command` - rodzaj działania. Jedno z `add`, `subtract`, `multiply`, `divide`
* `int first` - pierwsza liczba
* `int second` - druga liczba

### Wartość zwracana

* `std::string` - wynik działania jako tekst
* W przypadku podania błędnego parametru `command` funkcja powinna zwrócić napis "Invalid data".

### Przykłady użycia

```cpp
auto result = calculate("add", 2, 3);  // result = "5"
result = calculate("multiply", 2, 3);  // result = "6"
result = calculate("hello", 2, 3);     // result = "Invalid data"
```

___

## Fibonacci

Zaimplementuj dwie funkcje. Obie mają liczyć n-tą liczbę [ciągu Fibonacciego](https://pl.wikipedia.org/wiki/Ciąg_Fibonacciego), ale na odmienne sposoby.

* iteracyjnie (z użyciem pętli)
* rekurencyjnie (funkcja ma wołać samą siebie)

Funkcje muszą mieć określone sygnatury:

```cpp
int fibonacci_iterative(int sequence);
int fibonacci_recursive(int sequence);
```

___

## NWD (GCD) i NWW (LCM)

Zaimplementuj dwie funkcje:

* NWD, która ma liczyć Największy Wspólny Dzielnik 2 liczb
* NWW, która ma liczyć Najmniejszą Wspólną Wielokrotność 2 liczb.

Uważaj na nietypowe przypadki, takie jak `0` lub liczby ujemne.

### Przykład użycia

```cpp
std::cout << "NWW(255, 15) = " << NWW(255, 15) << "\n";
std::cout << "NWD(255, 15) = " << NWD(255, 15) << "\n";
```
