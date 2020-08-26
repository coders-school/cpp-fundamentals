<!-- .slide: data-background="#111111" -->

# C ++ basics

## Loops

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Loops

A loop is used to repeat statements that we want to execute more than once without having to write them over and over in the code.

Basic loops: `while`, `for`

___

## Loop `while`

`while` we use when we want to do something until some condition is met. Usually we have no idea when the sequences (we don't know the number of steps), e.g .:

* We browse the shirts on the Internet until we find a match for us <!-- .element: class="fragment fade-in" -->
* We repeat the fight with the same boss until we defeat him <!-- .element: class="fragment fade-in" -->
* We eat the soup until the plate is empty <!-- .element: class="fragment fade-in" -->
* We search the contacts on the phone until we find the person we are interested in <!-- .element: class="fragment fade-in" -->

___

### Loop construction `while`

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

## Loop `for`

`for` we use when we want to do something a certain number of times. We usually know the number of steps, e.g.

* <!-- .element: class="fragment fade-in" --> We fill out a questionnaire consisting of 10 questions -> number of steps 10
* <!-- .element: class="fragment fade-in" --> We move from A to B -> number of steps = distance / stride length
* <!-- .element: class="fragment fade-in" --> We are writing an exam consisting of 4 tasks -> the number of steps (if we can, 4, if not, we do the subroutine `ściągaj`)
* <!-- .element: class="fragment fade-in" --> We fasten our shirts (as long as we don't tear any button out)

___

### Loop construction `for`

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

Every loop `for` can be changed to `while` and vice versa. We choose the more convenient notation for us, usually depending on the knowledge of the number of steps.

There is another type of loop. What?

___

## Loop `do/while`

```cpp
do {
    // Do sth
} while(condition)
```

Code in loops `while` or `for` it may not be fulfilled even once the condition is never met.

Loop code `do/while` will be performed at least once.

___

## Task

Add a function `printString`. It is to print the text given as the first argument as many times as the value of the number given as the second argument. [Download the task][homework]

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