<!-- .slide: data-background="#111111" -->

# C++ basics

## Data types

<a href="https://coders.school">
    <img width="500px" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Some simple math

* <!-- .element: class="fragment fade-in" --> 1 byte == 8 bits
* <!-- .element: class="fragment fade-in" --> In a binary lottery, randomly selected numbers may have values <code>0</code> or <code>1</code>
* <!-- .element: class="fragment fade-in" --> Thus, when drawing 8 numbers, we can get, for example: <code>1 0 1 0 1 0 1 0</code>
* <!-- .element: class="fragment fade-in" --> There are exactly <code>256 -> (2^8)</code> such combinations
* <!-- .element: class="fragment fade-in" --> Thus, in 1 byte (8 bits) we can write 256 numbers, e.g. from 0 to 255
* <!-- .element: class="fragment fade-in" --> If we draw 32 numbers in the lottery, (32/8 = 4), i.e. 4 bytes, there are <code>2^32</code> such combinations (i.e. over 4 billion)

___

## Empty type - `void`

* <!-- .element: class="fragment fade-in" --> Objects of <code>void</code> type cannot be created
* <!-- .element: class="fragment fade-in" --> It is used to indicate that the function does not return anything
* <!-- .element: class="fragment fade-in" --> You can create <code>void*</code> pointers (bad practice in C++)
* <!-- .element: class="fragment fade-in" --> It is NOT used to indicate that the function takes no arguments

```cpp
int fun(void) { /* ... */ }  // bad practice, C style
int fun() { /* ... */ }      // good practice, C++ style
```
<!-- .element: class="fragment fade-in" -->

___

## Boolean - `bool`

* Size: at least 1 byte (usually equal to just 1)
  * `sizeof(bool) >= 1`
* 2 possible values
  * `false`
  * `true`

___

## Character types

* Size: 1 byte
* 256 possible values
* `char` -> from `-128` to `127`
* `unsigned char` -> from `0` to `255`

Prefix `unsigned` means that there are no negative numbers i.e. from 0 to some positive value.
<!-- .element: class="fragment fade-in" -->

The size of character types is always 1 byte.
<!-- .element: class="fragment fade-in" -->

The sizes of further types are platform dependent e.g. 32 bits or 64 bits.
<!-- .element: class="fragment fade-in" -->

___

## Integer types

* `short (unsigned short)` - at least 2 bytes
* `int (unsigned int)` - at least 2 bytes
* `long (unsigned long)` - at least 4 bytes
* `long long (unsigned long long)` - at least 8 bytes

___

## Floating-point types

* `float` - usually 4 bytes
* `double` - usually 8 bytes
* `long double` - usually 10 bytes (rarely used)
* Floating point types can always be negative (unsigned versions do not exist) <!-- .element: class="fragment fade-in" -->
* They have special values: <!-- .element: class="fragment fade-in" -->
  * `0`, `-0` (negative zero)
  * `-Inf`, `+Inf` (infinity)
  * `NaN` (Not a Number)

Warning! Comparison `NaN == NaN` gives `false` <!-- .element: class="fragment highlight-red" -->
<!-- .element: class="fragment fade-in" -->

Advanced Reading: [The IEEE754 standard that defines floating point types](https://en.wikipedia.org/wiki/IEEE_754)
<!-- .element: class="fragment fade-in" -->

___

## Type aliases

There are also types that are aliases (different naming for better understanding of type).

`std::size_t` depending on the compiler may be the type (`unsigned short`, `unsigned int`, `unsigned long`, `unsigned long long`). Usually it is the type `unsigned int`. It is worth using it when our variable will refer to some size, e.g. the size of an array.
<!-- .element: class="fragment fade-in" -->

We can create our own type aliases using `typedef` or `using`
<!-- .element: class="fragment fade-in" -->

```cpp
typedef int Number;
Number a = 5;   // int a = 5;

using Fraction = double;
Fraction b = 10.2;  // double b = 10.2;
```
<!-- .element: class="fragment fade-in" -->

___

## `auto` type

In some places we can use `auto` type. The compiler will deduce the type itself, e.g. based on the assigned value.

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

## Type Sizes

The C++ standard defines such a relationship between the sizes of integer types

```cpp
1 == sizeof(char) \
  <= sizeof(short) \
  <= sizeof(int) \
  <= sizeof(long) \
  <= sizeof(long long);
```

___

## Arithmetic operations

* Basic: + - * / <!-- .element: class="fragment fade-in" -->
* Modifying a variable: += -= *= /= <!-- .element: class="fragment fade-in" -->
* Incrementing (+1) variable: ++ <!-- .element: class="fragment fade-in" -->
* Decrementing (-1) variable: -- <!-- .element: class="fragment fade-in" -->
  
### Examples <!-- .element: class="fragment fade-in" -->

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

## Questions

```cpp
int i = 5;
auto j = i++ - 1;
```

<span class="fragment fade-in">What are the values `i` and `j`?</span>

`i = 6` <!-- .element: class="fragment fade-in" -->

`j = 4` <!-- .element: class="fragment fade-in" -->

<span class="fragment fade-in">What type is `j`?</span>

`int` <!-- .element: class="fragment fade-in" -->

___

## A little joke

What do you call 8 hobbits? <!-- .element: class="fragment fade-in" -->

A Hobbyte :) <!-- .element: class="fragment fade-in" -->

<!-- I couldn't get translation with the original one, so I took this version from internet :P -->
___

## Links for extending knowledge

* [Fundamental types on cppreference.com](https://en.cppreference.com/w/cpp/language/types)
* [The IEEE754 standard that defines floating point types](https://en.wikipedia.org/wiki/IEEE_754)
