<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Referencje

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## &

Magiczny znaczek `&` oznacza referencję.

```cpp
int value = 5;
int & number = value;
```

Powyższy zapis oznacza zmienną `num` typu `int&`, czyli referencję na typ `int`.
<!-- .element: class="fragment fade-in" -->

Nie ma znaczenia, czy referencję dokleimy do typu, czy nazwy zmiennej, ale referencja jest oddzielnym typem, więc sugerujemy nie doklejać jej do nazwy zmiennej.
<!-- .element: class="fragment fade-in" -->

```cpp
int& number = value;  // lewak
int &number = value;  // prawak (odradzane)
int & number = value; // neutralny
```
<!-- .element: class="fragment fade-in" -->
___

### Czym jest referencja?

Spójrzmy na fragment kodu.

```cpp
int number = 5;
int& refer = number;

std::cout << refer << '\n';   // 5
std::cout << ++refer << "\n"; // 6
std::cout << number << "\n";  // 6
```

* <!-- .element: class="fragment fade-in" --> Referencja odwołuje się do istniejącego obiektu
* <!-- .element: class="fragment fade-in" --> Jeżeli utworzymy obiekt <code>int value</code> to poprzez referencje <code>int& reference = value</code> będziemy mogli się do niego bezpośrednio odwoływać.
* <!-- .element: class="fragment fade-in" --> Referencja to inna, dodatkowa nazwa dla tej samej zmiennej (alias)
* <!-- .element: class="fragment fade-in" --> Modyfikacja referencji = modyfikacja oryginalnego obiektu

___

### Co zyskujemy w ten sposób?

* <!-- .element: class="fragment fade-in" --> Nie musimy kopiować elementów. Wystarczy, że przekażemy referencje.
  * W ten sposób możemy swobodnie w wielu miejscach programu odczytywać wartość tej zmiennej, bez zbędnego jej kopiowania.
* <!-- .element: class="fragment fade-in" --> Referencja zajmuje w pamięci tyle, ile zajmuje adres (4 lub 8 bajtów).
* <!-- .element: class="fragment fade-in" --> Tworzenie referencji do typu <code>int</code> (zazwyczaj 4 bajty) nie zawsze ma sens optymalizacyjny, chyba, że chcemy zmodyfikować ten element wewnątrz funkcji.
* <!-- .element: class="fragment fade-in" --> Przekazywanie argumentów przez referencje nabierze więcej sensu, kiedy poznamy już klasy i obiekty :)

[Ile miejsca zajmuje referencja? - stackoverflow.com](https://stackoverflow.com/questions/1179937/how-does-a-c-reference-look-memory-wise)
<!-- .element: class="fragment fade-in" -->

___

### Jak przekazać element przez referencję?

```cpp
void foo(int& num) {
    std::cout << num; // good
    num += 2;         // good
}
```
<!-- .element: class="fragment fade-in" -->

Jeśli chcemy mieć pewność, że funkcja nie zmodyfikuje nam wartości (chcemy ją przekazać tylko do odczytu) dodajemy `const`.
<!-- .element: class="fragment fade-in" -->

```cpp
void bar(const int& num) {
    std::cout << num; // good
    num += 2;         // compilation error, num is const reference
}
```
<!-- .element: class="fragment fade-in" -->

Wywołanie funkcji to po prostu:
<!-- .element: class="fragment fade-in" -->

```cpp
int num = 5;
foo(num);
bar(num);
```
<!-- .element: class="fragment fade-in" -->

___

## Zadanie

Zaimplementuj funkcję `foo()`. Ma ona przyjąć i zmodyfikować przekazany tekst. Na ekranie chcemy zobaczyć `"Other string"`.

```cpp
#include <iostream>
#include <string>

// TODO: Implement foo()
// It should modify passed string to text "Other string"

int main() {
    std::string str("Some string");
    foo(str);
    std::cout << str << '\n';
    return 0;
}
```

___

## Podsumowanie

* <!-- .element: class="fragment fade-in" --> referencja jest aliasem (inną nazwą dla zmiennej)
* <!-- .element: class="fragment fade-in" --> modyfikacja referencji to modyfikacja oryginalnego obiektu
* <!-- .element: class="fragment fade-in" --> przy przekazywaniu parametru przez referencję:
  * unikamy zbędnych kopii
  * modyfikacja obiektu będzie skutkowała zmodyfikowaniem oryginału przekazanego do funkcji
