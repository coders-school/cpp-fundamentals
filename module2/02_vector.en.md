<!-- .slide: data-background="#111111" -->

# C++ basics

## `std::vector<T>`

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Features `std::vector<T>`

* <!-- .element: class="fragment fade-in" --> very widely used
* <!-- .element: class="fragment fade-in" --> dynamic array
* <!-- .element: class="fragment fade-in" --> we do not have to specify in advance how many elements there should be
* <!-- .element: class="fragment fade-in" --> is in one contiguous memory area (like an array)
* <!-- .element: class="fragment fade-in" --> it manages the memory itself
  * will take care of allocating new memory when it is needed
  * will take care of memory deallocation when we no longer need it

___

## Create a vector

```cpp
std::vector<int> numbers;
```

* <!-- .element: class="fragment fade-in" --> a vector always needs to know what type of data it is holding
* <!-- .element: class="fragment fade-in" --> the data type is given in angle brackets <code><></code>

___

## Vector initialization with values <!-- .element: class="fragment fade-in" -->

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
std::vector<int> numbers {1, 2, 3, 4, 5};
```
<!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> both types of initialization (with = and without) are equivalent in the case of vector

___

## Vector operations

* <!-- .element: class="fragment fade-in" --> adding an element to the vector
  * `numbers.push_back(5)`
* <!-- .element: class="fragment fade-in" --> reading an element from a vector
  * `numbers[1]`
* <!-- .element: class="fragment fade-in" --> assigning multiple elements to a vector
  * `numbers = {1,2,3,4,5}`
* <!-- .element: class="fragment fade-in" --> getting the first element from the vector
  * `numbers.front()`
* <!-- .element: class="fragment fade-in" --> getting the last element from the vector
  * `numbers.back()`

[Documentation on cppreference.org](https://en.cppreference.com/w/cpp/container/vector)
<!-- .element: class="fragment fade-in" -->
