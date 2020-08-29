<!-- .slide: data-background="#111111" -->

# C++ basics

## Loops

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Loops

A loop is used to repeat statements that we want to execute more than once without having to write them over and over in the code.

Basic loops: `while`, `for`

___

## `while` loop

 We use `while` when we want to do something until some condition is met. Usually we have no idea when it is going to happen (we don't know the number of steps), e.g .:

* We browse the shirts on the Internet until we find a match for us <!-- .element: class="fragment fade-in" -->
* We repeat the fight with the same boss until we defeat him <!-- .element: class="fragment fade-in" -->
* We eat the soup until the plate is empty <!-- .element: class="fragment fade-in" -->
* We search through the contacts on the phone until we find the person we want to talk to <!-- .element: class="fragment fade-in" -->

___

### `while` loop construction

```cpp
while (condition) {
    // Do sth
}
```

### Example <!-- .element: class="fragment fade-in" -->

```cpp
while (a == b) {
    std::cin >> a;
    std::cin >> b;
}
```
<!-- .element: class="fragment fade-in" -->

___

## `for` loop

We use `for` when we want to do something a certain number of times. We usually know the number of steps, e.g.

* <!-- .element: class="fragment fade-in" --> We fill out a questionnaire consisting of 10 questions -> number of steps: 10
* <!-- .element: class="fragment fade-in" --> We move from point A to B -> number of steps = distance / step length
* <!-- .element: class="fragment fade-in" --> We are writing an exam consisting of 4 tasks -> the number of steps (if we are prepared, 4, if not, we do the subroutine `cheat`)
* <!-- .element: class="fragment fade-in" --> We fasten our shirts (as long as we don't tear any button out)

___

### `for` loop construction

```cpp
for (variable = initial_value; condition; variable_change) {
    // Do sth
}
```

### Example <!-- .element: class="fragment fade-in" -->

```cpp
for (size_t i = 0 ; i < 10 ; i+=2) {
    std::cout << "i: " << i << '\n';
}
```
<!-- .element: class="fragment fade-in" -->

___

Every loop `for` can be changed to `while` and vice versa. We choose the more convenient notation for us, usually depending if we know the number of steps.

But there is another type of loop.

___

## `do/while` loop

```cpp
do {
    // Do sth
} while(condition)
```

Code in `while` or `for` loops may not be executed even once if the condition is never met.

Code in `do/while` loop will be performed at least once.

___

## Exercise

Add a function `printString`. It is supposed to print the text given in the first argument as many times as the value of the number given in the second argument. [Download the exercise][homework]

```cpp
#include <iostream>

// Write your function here

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}
```

[homework]: https://github.com/coders-school/cpp-fundamentals/blob/master/module1/task3.cpp
