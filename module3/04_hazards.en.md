<!-- .slide: data-background="#111111" -->

# C ++ basics

## Threats

### in the use of references and pointers

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Empty indicators

```cpp
int* a = nullptr;
std::cout << *a;
```

Accessing a variable pointed to by an empty pointer is undefined behavior.
<!-- .element: class="fragment fade-in" -->

Always mark an empty pointer with `nullptr`.
<!-- .element: class="fragment fade-in" -->

We do not use `NULL` known from the C language or earlier standards, because it is less secure.
<!-- .element: class="fragment fade-in" -->

```cpp
void foo(int);
foo(NULL);     // bad - no error
foo(nullptr);  // good - compilation error
```
<!-- .element: class="fragment fade-in" -->

___

## Uninitialized pointers

```cpp
int* a;
std::cout << *a;
```

Indicator `a` contains the so-called rubbish.
Accessing the object pointed to by such a pointer is undefined behavior.
<!-- .element: class="fragment fade-in" -->

___

## References to deleted variables

As we already well know, local variables are removed when they are out of the scope we created them.
You can already guess what problems pointers and references will cause us when they still exist and the object they refer to is already destroyed.
It will be at best <span class="fragment highlight-red">"Crash"</span>at worst <span class="fragment highlight-red">"Undefined behavior"</span>.

### How to prevent such cases?
<!-- .element: class="fragment fade-in" -->

We must always ensure that the lifetime of the variable is longer than the lifetime of its indicator or reference.
<!-- .element: class="fragment fade-in" -->

___

## Removed variables - example

```cpp
std::vector<int*> vec;

void createAndAddToVec(int amount) {
    for (int i = 0 ; i < amount ; ++i) {
        vec.push_back(&i);
    }
    // local variable i does not exist here anymore
    // vec contains addresses to not existing local variables
}

int main() {
    createAndAddToVec(5);
    for (const auto& el : vec) {
        std::cout << *el << '\n';   // UB
    }
}
```

___

## How to deal with such a problem?

The answer may be dynamically allocated memory.
<!-- .element: class="fragment fade-in" -->

The easiest way to do this is by using a library `#include <memory>`that has `std::shared_ptr<T>`.
<!-- .element: class="fragment fade-in" -->

This indicator is called _intelligent_ for a reason. It is responsible for managing dynamic memory and releases the resource itself when we no longer need it.
<!-- .element: class="fragment fade-in" -->

### How to create such an indicator?
<!-- .element: class="fragment fade-in" -->

```cpp
auto ptr = std::make_shared<int>(5);  // preferred
auto ptr = std::shared_ptr<int>(new int{5});
```
<!-- .element: class="fragment fade-in" -->

___

## Corrected listing

```cpp
std::vector<std::shared_ptr<int>> vec; // previously: std::vector<int*> vec;

void createAndAddToVec(int amount) {
    for (int i = 0 ; i < amount ; ++i) {
        vec.push_back(std::make_shared<int>(i));
        // previously: vec.push_back(&i);

        // the same in 2 lines:
        // auto num = std::make_shared<int>(i);
        // vec.push_back(num);
    }
}

int main() {
    createAndAddToVec(5);
    for (const auto& el : vec) {
        std::cout << *el << '\n';
    }
}
```

___
<!-- .slide: style="font-size: 0.85em" -->

## Task

Write a function `foo()`. It is supposed to accept shared_ptr on int and assign value 20 to the object pointed to by it.

also `foo()` is to display the value of the int pointed to by the pointer and the number of shared_pts that point to this object.

Also display the same in `main()` before and after the call `foo()`.

```cpp
#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    // display the value under number pointer and use_count() of it
    foo(number);
    // display the value under number pointer and use_count() of it

    return 0;
}
```

___

## Task

Write a function `foo()`. It is supposed to take 2 values ​​of the type `int` and return their product as `shared_ptr`. Check how many owners it has `shared_ptr`.

```cpp
#include <iostream>

// TODO: Implement foo()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.

int main() {
    auto number = foo(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
```

___

## Intelligent pointers the solution to all problems?

Now that we've created a smart pointer, we don't have to worry about the variable's lifetime.
We can safely print these values ​​after exiting the function.
<!-- .element: class="fragment fade-in" -->

If a function needs to accept a raw pointer, i.e. `int* i` we can do it
using the function `std::shared_ptr::get()` as in the example:
<!-- .element: class="fragment fade-in" -->

```cpp
void foo(int* num) {
    do_sth(num);
}
  
int main() {
    auto ptr = std::make_shared<int>(5);
    foo(ptr.get())
}
```
<!-- .element: class="fragment fade-in" -->

___
<!-- .slide: style="font-size: 0.9em" -->

## The trap returns

```cpp
void foo(int* num) {
    if (num) {
        do_sth(num);
    }
}
  
int main() {
    auto ptr = std::make_shared<int>(5);
    int* raw = ptr.get();
    ptr.reset();    // delete object, deallocate memory
    foo(raw);       // problem, dangling pointer is passed
    foo(ptr.get()); // not a problem, nullptr is passed
}
```

If all objects `shared_ptr<T>` references to this variable are deleted, the resource is released.
<!-- .element: class="fragment fade-in" -->

Our usual indicator we downloaded earlier with `get()`, will have an address for a resource that no longer exists.
<!-- .element: class="fragment fade-in" -->

Attempting to use it will result in an UB or a crash. Be very careful with the usual pointers.
<!-- .element: class="fragment fade-in" -->

___

## Conclusions

* <!-- .element: class="fragment fade-in" --> indicators may not point to anything (<code>nullptr</code>), the references must point to some previously created object
* <!-- .element: class="fragment fade-in" --> pointers and references can be dangerous (more often pointers) if they are associated with objects that no longer exist
  * these are the so-called dangling pointers / references, dangling pointers / references
* <!-- .element: class="fragment fade-in" --> The reference cannot be assigned an object other than the one specified during its initialization
* <!-- .element: class="fragment fade-in" --> pointers can be assigned new addresses to point to other objects (except fixed pointers)
* <!-- .element: class="fragment fade-in" --> better by default not to use raw pointers
* <!-- .element: class="fragment fade-in" --> it's better to use smart pointers
