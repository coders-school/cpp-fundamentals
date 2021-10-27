<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Operacje arytmetyczne

<a href="https://coders.school">
    <img width="500px" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Operacje arytmetyczne

* Podstawowe: + - * / <!-- .element: class="fragment fade-in" -->
* Modyfikujące zmienną: += -= *= /= <!-- .element: class="fragment fade-in" -->
* Inkrementujące (+1) zmienną: ++ <!-- .element: class="fragment fade-in" -->
* Dekrementujące (-1) zmienną: -- <!-- .element: class="fragment fade-in" -->

### Przykłady <!-- .element: class="fragment fade-in" -->

```cpp
int a = 5 + 7; // a = 12
```
<!-- .element: class="fragment fade-in" -->

```cpp
int a = 5;
a += 7; // a = 12
```
<!-- .element: class="fragment fade-in" -->

```cpp
int a = 5;
++a; // a = 6
a--; // a = 5
```
<!-- .element: class="fragment fade-in" -->

___

## Pytania

```cpp
int i = 5;
auto j = i++ - 1;
```

<span class="fragment fade-in">Ile wynoszą wartości `i` oraz `j`?</span>

`i = 6` <!-- .element: class="fragment fade-in" -->

`j = 4` <!-- .element: class="fragment fade-in" -->

<span class="fragment fade-in">Jakiego typu jest `j`?</span>

`int` <!-- .element: class="fragment fade-in" -->
