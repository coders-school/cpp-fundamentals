<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Stałe

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

Stałych w odróżnieniu od zmiennych nie można modyfikować. Można im nadać wartość tylko podczas inicjalizacji obiektu i później nie można jej zmienić.

Stałe oznacza się słowe kluczowym `const` przed nazwą typu.

```cpp
const int a = 42;
a = 43; // compilation error
```
