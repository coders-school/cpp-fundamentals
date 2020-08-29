<!-- .slide: data-background="#111111" -->

# C++ basics

## Functions

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Functions

A function is a fragment of a program that was given a name and we can execute it by calling its name and pass it possible arguments. <!-- .element: class="fragment fade-in" -->

Function == subprogram == procedure <!-- .element: class="fragment fade-in" -->

For example, when cycling, our main function is to move from point A to B. However, we also perform several subroutines such as gear shifting, braking, accelerating, turning. Similarly, in a program, we can isolate specific behaviors and transfer them to functions that we will name to suggest what they do. It is important that the function only does one thing. One function changes gears, the other brakes, the third turns. <!-- .element: class="fragment fade-in" -->

___

## Function signatures (declarations)

`void fun(int)` - the function is named fun, returns nothing, and takes one int.

### Guess signatures by description <!-- .element: class="fragment fade-in" -->

A function called `foo` that returns nothing and takes one argument of type `double`.
<!-- .element: class="fragment fade-in" -->

`void foo(double)`
<!-- .element: class="fragment fade-in" -->

A function called `bar` that returns type double and takes 2 arguments. The first is `float` and the second is `const int` (`const` means the value cannot be modified).
<!-- .element: class="fragment fade-in" -->

`double bar(float, const int)`
<!-- .element: class="fragment fade-in" -->

___

## Function calls

`foo(5.0)` -> we call the function `foo` with an argument `double` which is equal to `5.0`
<!-- .element: class="fragment fade-in" -->

`double result = bar(5.4f, 10)` -> we call the function `bar` with an argument `float (5.4f)` and `int (10)` and we assign its result to a variable of type `double` named `result`.
<!-- .element: class="fragment fade-in" -->

___

## Exercise

Add the missing function `multiply`. It is supposed to multiply two numbers given as its parameters. [Download the exercise][homework]

```cpp
#include <iostream>

// Write missing function here

int main() {
    std::cout << "4 * 5: " << multiply(4, 5) << "\n";
    std::cout << "10 * 5: " << multiply(10, 5) << "\n";
    std::cout << "-5 * 5: " << multiply(-5, 5) << "\n";

    return 0;
}
```

[homework]: https://github.com/coders-school/cpp-fundamentals/blob/master/module1/task1.cpp
