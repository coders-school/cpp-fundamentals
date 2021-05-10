<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Opisy zadań

<a href="https://coders.school">
    <img width="500px" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Praca domowa

### Post-work

* Jeśli nie wiesz czym jest `operator%` to się dowiedz. Przyda się do pracy domowej :)
* add-even (5 punkty)
* max-of-vector (5 punktów)
* generate-sequence (5 punktów)

#### Bonus za punktualność

* **26.05.2021 (środa)** to ostatni dzień na zebranie bonusowych punktów za punktualność
* **3 XP** wpadną Ci za każde zadanie dostarczone w terminie (razem aż 9 punktów)

#### [➡️ Zadania w repo](https://github.com/coders-school/cpp-fundamentals/tree/master/05-recap-homework/04-tasks-description.md)

___

### Pre-work

Wykonaj te zadania, aby lepiej przygotować się do kolejnych lekcji

* Przypomnij sobie informacje o wskaźnikach np. z [wideo pana Zelenta](https://www.youtube.com/watch?v=0DQl74alJzw)
* [Poczytaj o `enum`ach](https://cpp0x.pl/kursy/Kurs-C++/Typ-wyliczeniowy-enum/318)
* Zainteresuj się tematem smart pointerów i poszukaj informacji czym jest `std::shared_ptr`
* Przyjrzyj się plikom z testami w zadaniach domowych i spróbuj dopisać własne przypadki testowe

___

## add-even

Napisz funkcję, która przyjmie `std::vector<int>` oraz zwróci sumę wszystkich jego parzystych elementów.

Deklaracja - `int addEven(const std::vector<int>& numbers)`

Ponieważ polecenie można zrozumieć dwojako, to zapoznaj się z testami, jeśli nie wiesz, co funkcja powinna zwracać w konkretnych przypadkach.

### Przykład użycia

```cpp
std::vector<int> vec{1, 2, 3, 4, 5};
auto result = addEven(vec);  // result = 6;
```

___

## max-of-vector

Napisz funkcję, która przyjmuje `std::vector<int>` i zwraca największy element tego wektora.

### Przykład użycia

```cpp
std::vector<int> numbers = {6, 78, 12, 54, -11, 0};
auto result = maxOfVector(numbers);  // result = 78
```

___

## generate-sequence

Napisz funkcję, która przyjmuje 2 argumenty:

* `int count`
* `int step`

oraz zwraca `std::vector<int>` posiadający `count` elementów i każdy z nich jest większy od poprzedniego o `step`. Pierwszy ma wynosić tyle, ile `step`.

### Przykład użycia

```cpp
auto result = generateSequence(5, 3);  // result = {3, 6, 9, 12, 15}
```
