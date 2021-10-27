<!-- .slide: data-background="#111111" -->

# Podstawy C++

## `enum` i `enum class`

<a href="https://coders.school">
    <img width="500" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Typ wyliczeniowy

`enum` to po polsku typ wyliczeniowy.
W C++11 wprowadzono także `enum class` zwany silnym typem wyliczeniowym.

### Przykład <!-- .element: class="fragment fade-in" -->

Załóżmy, że piszemy oprogramowanie do pralki.
Chcielibyśmy utworzyć także interfejs zwracający numer błędu np:
<!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> brak wody
* <!-- .element: class="fragment fade-in" --> zbyt duże obciążenie
* <!-- .element: class="fragment fade-in" --> problem z łożyskami
* <!-- .element: class="fragment fade-in" --> blokada pompy

W celu warto użyć typu `enum` lub lepiej - `enum class`.
<!-- .element: class="fragment fade-in" -->

___

### Implementacja przykładu

```cpp
enum ErrorCode {
    lack_of_water,
    too_much_load,
    bearing_problem,
    block_of_pump
};

// or better ↓

enum class ErrorCode {
    lack_of_water,
    too_much_load,
    bearing_problem,
    block_of_pump
};
```

___

## Numeracja

Typ `enum` pod spodem numerowany jest od `0` do `n - 1`, gdzie `n` to liczba elementów.
<!-- .element: class="fragment fade-in" -->

Jeżeli chcemy nadać inne wartości musimy to zrobić ręcznie:
<!-- .element: class="fragment fade-in" -->

```cpp
enum class ErrorCode {
  lack_of_water = 333,
  too_much_load, // will be 334
  bearing_problem = 600,
  block_of_pump // will be 601
};
```
<!-- .element: class="fragment fade-in" -->

___

## `enum` vs `enum class`

`enum` od `enum class` różni się głównie tym, że możemy niejawnie skonwertować typ `enum` na `int` (w końcu to typ wyliczeniowy).

Natomiast typ `enum class` możemy skonwertować na `int`, tylko poprzez jawne rzutowanie. Nie będziemy na razie omawiać rzutowania. Warto tylko
pamiętać, że robimy to wywołując:
<!-- .element: class="fragment fade-in" -->

```cpp
int num = static_cast<int>(ErrorCode::lack_of_water)
```
<!-- .element: class="fragment fade-in" -->

W jakich innych przypadkach zastosujesz typ wyliczeniowy?
<!-- .element: class="fragment fade-in" -->

___
<!-- .slide: style="font-size: 0.9em" -->

## `enum` vs `enum class`

Druga różnica - dla `enum` możemy mieć konflikt nazw, dla `enum class` nie.

```cpp
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};
```
<!-- .element: class="fragment fade-in" -->

```cpp
enum TrafficLight {
    GREEN,  // 0
    YELLOW, // 1
    RED     // 2
};
```
<!-- .element: class="fragment fade-in" -->

```cpp
auto lightColor = getColor();
if (lightColor == RED) {  // 0 or 2?
    stop();
} else {
    go();
}
```
<!-- .element: class="fragment fade-in" -->

___
<!-- .slide: style="font-size: 0.9em" -->

## Użycie wartości z `enum class`

Aby uniknąć konfliktu nazw stosujemy `enum class`.

```cpp
enum class Color {
    RED,
    GREEN,
    BLUE,
};
```
<!-- .element: class="fragment fade-in" -->

```cpp
enum class TrafficLight {
    GREEN,
    YELLOW,
    RED
};
```
<!-- .element: class="fragment fade-in" -->

```cpp
auto lightColor = getColor();
if (lightColor == TrafficLight::RED) {
    stop();
} else {
    go();
}
```
<!-- .element: class="fragment fade-in" -->
