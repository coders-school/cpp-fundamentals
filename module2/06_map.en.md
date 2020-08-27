<!-- .slide: data-background="#111111" -->

# C ++ basics

## `std::map<K, V>`

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Map, dictionary

* map is a set of pairs (key - Key, value - Value)
* `std::map` in C ++ it is equivalent to `dict` from Python

For example, we create a collection of favorite records and put them in a cupboard.
<!-- .element: class="fragment fade-in" --> 
Of course, we have a huge number of these CDs and we would like to be able to find the CD easily when we search for it.
<!-- .element: class="fragment fade-in" --> 
For this purpose, we number all the discs and write down on a piece of paper information under which number the title is placed. This is how we create a map.
<!-- .element: class="fragment fade-in" --> 

```cpp
std::map<size_t, std::string> discs {
    {1, "The Lord of the Rings: The Fellowship of the Ring"},
    {2, "The Lord of the Rings: The Two Towers"},
    {3, "The Lord of the Rings: The Return of the King"}
};
```
<!-- .element: class="fragment fade-in" --> 

The key here is the number, while the value is the title of the movie.
<!-- .element: class="fragment fade-in" --> 

___

## Operations on `std::map`

* <!-- .element: class="fragment fade-in" --> beginning and end of range
  * `begin()`
  * `end()`
* <!-- .element: class="fragment fade-in" --> information about the number of items in the map
  * `size()`
* <!-- .element: class="fragment fade-in" --> information if the map is empty
  * `empty()`
* <!-- .element: class="fragment fade-in" --> access to the item for the specified key
  * `operator[key]`
* <!-- .element: class="fragment fade-in" --> adding a pair (key, value) to the map if such a pair is not present in it yet
  * `insert({key, value})`

[Documentation on cppreference.org](https://en.cppreference.com/w/cpp/container/map)
<!-- .element: class="fragment fade-in" -->


___

## Question

What will happen when we call on the mentioned map:

```cpp
discs[4] = "Harry Potter";
```

Assigning something to a map element with `operator[]` makes:
<!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> if there is already a value for a given key, we will replace it.
* <!-- .element: class="fragment fade-in" --> when there is no value for a given key, we will create a new pair (key, value)

___
<!-- .slide: style="font-size: 0.8em" -->

## Let's execute this code

```cpp
#include <iostream>
#include <map>
#include <string>

void Print(const std::map<size_t, std::string>& map) {
    for (const auto& pair : map) {
        std::cout << pair.first << " | " << pair.second << '\n';
    }
}

int main() {
    std::map<size_t, std::string> discs {
        {1, "The Lord of the Rings: The Fellowship of the Ring"},
        {2, "The Lord of the Rings: The Two Towers"},
        {3, "The Lord of the Rings: The Return of the King"}
    };

    Print(discs);
    std::cout << "\nAfter adding a new element\n";
    discs[4] = "Harry Potter";
    Print(discs);
    std::cout << "\nAfter modification of an element\n";
    discs[4] = "Harry Potter and the Philosopher's Stone";
    Print(discs);
}
```

___

## Result

```txt
1 | The Lord of the Rings: The Fellowship of the Ring
2 | The Lord of the Rings: The Two Towers
3 | The Lord of the Rings: The Return of the King

After adding a new element
1 | The Lord of the Rings: The Fellowship of the Ring
2 | The Lord of the Rings: The Two Towers
3 | The Lord of the Rings: The Return of the King
4 | Harry Potter

After modification of an element
1 | The Lord of the Rings: The Fellowship of the Ring
2 | The Lord of the Rings: The Two Towers
3 | The Lord of the Rings: The Return of the King
4 | Harry Potter and the Philosopher's Stone
```

___
<!-- .slide: style="font-size: 0.9em" -->

## Task

Write a function that takes `std::vector<int>` and `std::list<std::string>` and returns the map `std::map<int, std::string>`. [Download the task][task4]

```cpp
#include <iostream>
#include <list>
#include <string>
#include <vector>

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list


int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
```

[task4]: https://github.com/coders-school/cpp-fundamentals/tree/master/module2/task4.cpp
