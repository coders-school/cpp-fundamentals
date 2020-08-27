<!-- .slide: data-background="#111111" -->

# C ++ basics

## `enum` and `enum class`

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Enumerated type

`enum` is an enumerated type in Polish.
Also introduced in C ++ 11 `enum class` called a strong enumeration type.

### Example <!-- .element: class="fragment fade-in" -->

Suppose we write washing machine software.
We would also like to create an interface that returns an error number, e.g .:
<!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> lack of water
* <!-- .element: class="fragment fade-in" --> too heavy a load
* <!-- .element: class="fragment fade-in" --> problem with bearings
* <!-- .element: class="fragment fade-in" --> pump lock
  
In order to use type `enum` or better - `enum class`.
<!-- .element: class="fragment fade-in" -->

___

### Example implementation

```cpp
enum ErrorCode {
    lack_of_water;
    too_much_load;
    bearing_problem;
    block_of_pump;
};

// or better ↓

enum class ErrorCode {
    lack_of_water;
    too_much_load;
    bearing_problem;
    block_of_pump;
};
```

___

## Numbering

Type `enum` underneath it is numbered from `0` down `n - 1`where `n` is the number of elements.
<!-- .element: class="fragment fade-in" -->

If we want to set different values, we have to do it manually:
<!-- .element: class="fragment fade-in" -->

```cpp
enum class ErrorCode {
  lack_of_water = 333;
  to_much_load; // will be 334
  bearing_problem = 600;
  block_of_pump; // will be 601
}
```
<!-- .element: class="fragment fade-in" -->

___

## `enum` vs `enum class`

`enum` from `enum class` the main difference is that we can implicitly convert the type `enum` on `int` (it's an enumerated type after all).

However, type `enum class` we can convert to `int`, only by explicit casting. We are not going to discuss casting for now. It's just worth it
remember that we do this by calling:
<!-- .element: class="fragment fade-in" -->

```cpp
int num = static_cast<int>(ErrorCode::lack_of_water)
```
<!-- .element: class="fragment fade-in" -->

In what other cases would you use the enumeration type?
<!-- .element: class="fragment fade-in" -->

___
<!-- .slide: style="font-size: 0.9em" -->

## `enum` vs `enum class`

The second difference - for `enum` we may have a name conflict for `enum class` no.

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

## Use the value of z `enum class`

To avoid a name conflict, we use `enum class`.

```cpp
enum class Color {
    RED,
    GREEN,
    BLUE,
}
```
<!-- .element: class="fragment fade-in" -->

```cpp
enum class TrafficLight {
    GREEN,
    YELLOW,
    RED
}
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
