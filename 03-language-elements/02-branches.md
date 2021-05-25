<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Instrukcje warunkowe

<a href="https://coders.school">
    <img width="500" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Instrukcja `if`

Instrukcja warunkowa to nic innego jak zadanie programowi pytania np.:

* Czy otrzymałeś już wszystkie dane? <!-- .element: class="fragment fade-in" -->
* Czy życie bossa spadło do 0? <!-- .element: class="fragment fade-in" -->
* Czy osiągnięcie zostało zdobyte przez gracza? <!-- .element: class="fragment fade-in" -->
* Czy liczba jest większa od maksymalnie dopuszczanej? <!-- .element: class="fragment fade-in" -->

___

## Konstrukcja `if`

```cpp
if (condition) {
    // do sth
}
```

___

## Łączenie warunków

A co w przypadku, gdy wiele informacji musi być spełnionych?
Możemy połączyć warunki operatorem **lub** (`||`, `or`) bądź **i** (`&&`, `and`)

```cpp
if (are_potatoes_eaten && is_meat_eaten && is_salad_eaten)
```
<!-- .element: class="fragment fade-in" -->

Wszystkie 3 warunki muszą zostać spełnione <!-- .element: class="fragment fade-in" -->

```cpp
if (player_has_20_dex || player_has_18_int || player_has_22_str)
```
<!-- .element: class="fragment fade-in" -->

W tym przypadku wystarczy spełnić jeden z 3 warunków. Mogą zostać spełnione wszystkie, ale wystarczy by został spełniony jeden dowolny. <!-- .element: class="fragment fade-in" -->

___

## Instrukcja `else`

Jeżeli program może różnie zareagować na spełnienie jakiś warunków możemy zastosować konstrukcje `if else`

```cpp
if (number < 2) {
    critical_miss();
} else if (number < 18) {
    hit();
} else {
    critical_hit();
}
```

___

## Instrukcja `switch/case`

```cpp
char option = getInput();
switch (option) {
case 'l':
    goLeft();
    break;
case 'r':
    goRight();
    break;
default:
    exit();
}
```

* `case` oznacza konkretny przypadek
* `break` informuje, że wychodzimy z instrukcji warunkowej `switch` i kontynuujemy dalej program. Jego brak spowoduje, że wykonają się instrukcje z kolejnego `case`.
* `default` jest to miejsce gdzie program dotrze, gdy żaden inny warunek nie zostanie spełniony
* Zmienna sterująca instrukcją `switch/case` musi być typu liczbowego całkowitego czyli np. `int`, `char`, `long` etc. Może być także typu wyliczeniowegp `enum`, który także jest widziany przez program jako liczba całkowita

___

## Zadanie

Dopisz funkcję `max`. Ma ona zwracać maksymalną z trzech podanych wartości. [Pobierz zadanie][zadanie-domowe]

```cpp
#include <iostream>

// Write your function here

int main() {
    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}
```

[zadanie-domowe]: ../03-language-elements/tasks/02-max.cpp
