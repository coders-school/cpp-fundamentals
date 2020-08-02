<!-- .slide: data-background="#111111" -->

# Podstawy C++

## `std::string`

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Kontener znaków - `std::string`

* <!-- .element: class="fragment fade-in" --> specjalny kontener, który przechowuje znaki
* <!-- .element: class="fragment fade-in" --> <code>std::string</code> ma również swój początek i koniec, jak każdy kontener
* <!-- .element: class="fragment fade-in" --> podobne funkcje jak <code>std::vector</code>

___

## Operacje na `std::string`

* <!-- .element: class="fragment fade-in" --> dodanie znaku na koniec
  * `str.push_back('a')` (nikt tak nie robi :))
  * polecamy `str += 'a';`
* <!-- .element: class="fragment fade-in" --> odczytanie pojedynczego znaku
  * `str[1]`
* <!-- .element: class="fragment fade-in" --> inicjalizacja
  * `std::string str("Witam")`
  * `std::string str = "Witam"`
* <!-- .element: class="fragment fade-in" --> przypisanie całego napisu
  * `str = "Witam"`
* <!-- .element: class="fragment fade-in" --> pobieranie pierwszego znaku
  * `str.front()`
* <!-- .element: class="fragment fade-in" --> pobieranie ostatniego znaku
  * `str.back()`
