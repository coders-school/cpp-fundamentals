<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Aliasy typów

<a href="https://coders.school">
    <img width="500px" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Aliasy typów

Istnieją też typy, która są aliasami (inne nazewnictwo w celu lepszego zrozumienia typu).

`std::size_t` w zależności od kompilatora może być typu (`unsigned short`, `unsigned int`, `unsigned long`, `unsigned long long`). Przeważnie jest on typu `unsigned int`. Warto wykorzystywać go, gdy nasza zmienna będzie odnosić się do jakiegoś rozmiaru np. wielkość tablicy.
<!-- .element: class="fragment fade-in" -->

Własne aliasy typów możemy tworzyć używając `typedef` lub `using`
<!-- .element: class="fragment fade-in" -->

```cpp
typedef int Number;
Number a = 5;   // int a = 5;

using Fraction = double;
Fraction b = 10.2;  // double b = 10.2;
```
<!-- .element: class="fragment fade-in" -->
