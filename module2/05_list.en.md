<!-- .slide: data-background="#111111" -->

# C ++ basics

## `std::list<T>`

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## List

### Question: what features did he have `std::vector<T>`?
<!-- .element: class="fragment fade-in" -->

Unlike a vector, the list is scattered around the memory. Which is sometimes convenient, because we can use fragments of memory,
that could be inaccessible to the vector.
<!-- .element: class="fragment fade-in" -->

### Question: How do list elements know about each other's existence?
<!-- .element: class="fragment fade-in" -->

Each list item stores a pointer to either the next item (one-way list) or the next and previous item (two-way list).
<!-- .element: class="fragment fade-in" -->

___
<!-- .slide: style="font-size: 0.9em" -->

## Operations on `std::list`

* <!-- .element: class="fragment fade-in" --> getting the first and last item in a list
  * `front()`
  * `back()`
* <!-- .element: class="fragment fade-in" --> the beginning and the end of the map
  * `begin()`
  * `end()`
* <!-- .element: class="fragment fade-in" --> information about the number of items in the list
  * `size()`
* <!-- .element: class="fragment fade-in" --> information whether the list is empty
  * `empty()`
* <!-- .element: class="fragment fade-in" --> adding an item to the end of the list
  * `push_back()`
* <!-- .element: class="fragment fade-in" --> <b> NEW </b> adds an item to the top of the list
  * `push_front()`
* <!-- .element: class="fragment fade-in" --> <b> NEW </b> sorting of list items (can't use <code>std::sort</code> for list)
  * `sort()`

[Documentation on cppreference.org](https://en.cppreference.com/w/cpp/container/list)
<!-- .element: class="fragment fade-in" -->

___

## Question: how do I get to the 10th list item?

Since each list item only knows about the previous and next items, we can't get to the 10th item that easily.
<!-- .element: class="fragment fade-in" -->

We can access the first item via `front()` or `*begin()`
<!-- .element: class="fragment fade-in" -->

```cpp
int main() {
    std::list<int> list {1, 2, 3, 4, 5};
    std::cout << *list.begin();
    std::cout << list.front();
}
```
<!-- .element: class="fragment fade-in" --> 

___

We can access the 10th element by going from 1 to 10.

```cpp
int main() {
    std::list<int> list {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = list.begin();
    for (size_t i = 0 ; i < 10 ; ++i) {
        ++it; // jump to next element
    }
    std::cout << *it;
}
```
<!-- .element: class="fragment fade-in" -->

It takes more time than getting into the 10th element in `std::vector`.
<!-- .element: class="fragment fade-in" -->

___

## Task

Write a function that takes a vector and returns a list that contains the sorted values ​​from the vector. [Download the task][task3]

```cpp
#include <iostream>
#include <vector>

// Implement createSortedList
// It should take a vector and return a list of sorted elements
// add proper include :)

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
```

[task3]: https://github.com/coders-school/cpp-fundamentals/tree/master/module2/task3.cpp

___

## Question: when is it profitable to use `std::list`, when `std::vector`?
