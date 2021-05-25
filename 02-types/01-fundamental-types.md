<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Typy podstawowe

<a href="https://coders.school">
    <img width="500px" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Prosta matematyka

* <!-- .element: class="fragment fade-in" --> 1 bajt == 8 bitów
* <!-- .element: class="fragment fade-in" --> W binarnym totolotku wylosowane liczby mogą mieć <code>0</code> lub <code>1</code>
* <!-- .element: class="fragment fade-in" --> Zatem podczas losowania 8 numerków możemy otrzymać przykładowo: <code>1 0 1 0 1 0 1 0</code>
* <!-- .element: class="fragment fade-in" --> Takich kombinacji jest dokładnie <code>256 -> (2^8)</code>
* <!-- .element: class="fragment fade-in" --> Zatem na 1 bajcie (8 bitach) możemy zapisać 256 liczb, np. od 0 do 255
* <!-- .element: class="fragment fade-in" --> Jeżeli w totolotku losujemy 32 numerki, (32/8 = 4) czyli 4 bajty to takich kombinacji jest <code>2^32</code> (czyli ponad 4 miliardy)

___

## Typ pusty - `void`

* <!-- .element: class="fragment fade-in" --> Nie można tworzyć obiektów typu <code>void</code>
* <!-- .element: class="fragment fade-in" --> Służy do zaznaczenia, że funkcja nic nie zwraca
* <!-- .element: class="fragment fade-in" --> Można tworzyć wskaźniki <code>void*</code> (zła praktyka w C++)
* <!-- .element: class="fragment fade-in" --> NIE służy do oznaczania, że funkcja nie przyjmuje argumentów

```cpp
int fun(void) { /* ... */ }  // bad practice, C style
int fun() { /* ... */ }      // good practice, C++ style
```
<!-- .element: class="fragment fade-in" -->

___

## Typ logiczny - `bool`

* Rozmiar: co najmniej 1 bajt (zazwyczaj równy właśnie 1)
  * `sizeof(bool) >= 1`
* 2 możliwe wartości
  * `false`
  * `true`

___

## Typy znakowe

* Rozmiar: 1 bajt
* 256 możliwych wartości
* `char` -> od `-128` do `127`
* `unsigned char` -> od `0` do `255`

Przedrostek `unsigned` oznacza, że typ jest bez znaku (bez liczb ujemnych), czyli od 0 do jakieś dodatniej wartości.
<!-- .element: class="fragment fade-in" -->

Rozmiar typów znakowych to zawsze 1 bajt.
<!-- .element: class="fragment fade-in" -->

Rozmiary dalszych typów zależą od platformy np. 32 bity, 64 bity.
<!-- .element: class="fragment fade-in" -->

___

## Typy całkowitoliczbowe

* `short (unsigned short)` - co najmniej 2 bajty
* `int (unsigned int)` - co najmniej 2 bajty
* `long (unsigned long)` - co najmniej 4 bajty
* `long long (unsigned long long)` - co najmniej 8 bajtów

___

## Typy zmiennoprzecinkowe

* `float` - zwykle 4 bajty
* `double` - zwykle 8 bajtów
* `long double` - zwykle 10 bajtów (rzadko stosowany)
* Typy zmiennoprzecinkowe zawsze mogą mieć ujemne wartości (nie istnieją wersje unsigned) <!-- .element: class="fragment fade-in" -->
* Posiadają specjalne wartości: <!-- .element: class="fragment fade-in" -->
  * `0`, `-0` (ujemne zero)
  * `-Inf`, `+Inf` (Infinity, nieskończoność)
  * `NaN` (Not a Number)

Uwaga! Porównanie `NaN == NaN` daje `false` <!-- .element: class="fragment highlight-red" -->
<!-- .element: class="fragment fade-in" -->

Zaawansowana lektura: [Standard IEEE754 definiujący typy zmiennoprzecinkowe](https://en.wikipedia.org/wiki/IEEE_754)
<!-- .element: class="fragment fade-in" -->

___

## Rozmiary typów

Standard C++ definiuje taką zależność pomiędzy rozmiarami typów całkowitoliczbowych

```cpp
1 == sizeof(char) \
  <= sizeof(short) \
  <= sizeof(int) \
  <= sizeof(long) \
  <= sizeof(long long);
```

___

## Typ `auto`

W pewnych miejscach możemy użyć typu `auto`. Kompilator sam wydedukuje typ, np. na podstawie przypisanej wartości.

```cpp
  auto num = 5;         // int
  auto num = 5u;        // unsigned int
  auto num = 5.5;       // double
  auto num = 5.f;       // float
  auto letter = 'a';    // char
  auto num = false;     // bool
  auto sth;             // compilation error, unable to deduce type
```

___

## Mały suchar

Kim jest Hobbit? <!-- .element: class="fragment fade-in" -->

Jest to 1/8 Hobbajta :) <!-- .element: class="fragment fade-in" -->

___

## Linki dla poszerzenia wiedzy

* [Fundamental types on cppreference.com](https://en.cppreference.com/w/cpp/language/types)
* [Standard IEEE754 definiujący typy zmiennoprzecinkowe](https://en.wikipedia.org/wiki/IEEE_754)
