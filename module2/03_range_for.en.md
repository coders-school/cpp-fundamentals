<!-- .slide: data-background="#111111" -->

# C ++ basics

## Loop `for` after collection

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Ranges

* <!-- .element: class="fragment fade-in" --> Each container (including an array or vector) has its end and beginning
  * function `begin()` returns the beginning of the container
  * function `end()` returns the end of the container
  * (in a very simplified way, we will extend the topic with iterators)

___

## Range based `for` loop

Thanks to the start and end of range information, we can write a loop iterating through the entire scope of the container.
<!-- .element: class="fragment fade-in" -->

```cpp
for (auto i = vec.begin(); i != vec.end(); ++i) {
    auto element = *i;
    // do sth on element
}
```
<!-- .element: class="fragment fade-in" -->

However, such a notation is unnecessarily complex and not readable. <!-- .element: class="fragment fade-in" -->
That is why they were created `range loop` that allow easy writing `for (typ nazwa : kontener)`.
<!-- .element: class="fragment fade-in" -->
The compiler can generate it by itself, if we use the notation below. <!-- .element: class="fragment fade-in" -->

```cpp
for (auto element : vec) {
    // do sth on element
}
```
<!-- .element: class="fragment fade-in" -->

___

## Task

Write a function `printVector`which he will take as an argument `std::vector<std::string>` and print its contents using a for loop on the collection.
Each item on a new line.
[Download the task][task1]

```cpp
#include <iostream>
#include <vector>
#include <string>

// Implement printVector

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}
```

[task1]: https://github.com/coders-school/cpp-fundamentals/tree/master/module2/task1.cpp

___

## Task

Write a function `concatenateVector`which will take 2 vectors as arguments and then return one which will contain alternating elements from the first and second vector.
For example, for the following vec1 and vec2 it should return: `{1, 11, 2, 12, 3, 13, 4, 14, 5, 15}`
[Download the task][task2]

```cpp
#include <iostream>
#include <vector>

// Implement concatenateVector

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
```

[task2]: https://github.com/coders-school/cpp-fundamentals/tree/master/module2/task2.cpp
