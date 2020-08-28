<!-- .slide: data-background="#111111" -->

# C++ basics

## Pointers

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Pointers - an analogy

In addition to references, there are also pointers. Pointers work much like references.
<!-- .element: class="fragment fade-in" -->

Imagine you are planning a trip to Majorca. We get on the plane and fly.
On the destination, it turns out that we have forgotten the hotel address 😦
In order to find it, we have to call the travel agency, wait for the service, explain the whole complex story, and finally, after a long time, we get the address of our hotel.
The process of obtaining this information was time-consuming for us.
<!-- .element: class="fragment fade-in" -->

Let's imagine, however, that we have previously saved the address of our hotel on our phone. To remember where it was, we just need to check the phone. The process took much less time.
<!-- .element: class="fragment fade-in" -->

___

## Pointers in C++

It is similar in C++. Pointers are used to indicate the location in memory where the desired object is located.
<!-- .element: class="fragment fade-in" -->

The processor does not have to ask the memory bus each time where the given variable is because it knows immediately what its address is (we avoid intermediaries like a phone call to the service office).
<!-- .element: class="fragment fade-in" -->

Also, if a function takes a pointer, it doesn't have to copy the entire contents of the object, which is time consuming. You can indicate where this object already exists much faster.
<!-- .element: class="fragment fade-in" -->

___

### How do I pass a variable by a pointer?

```cpp
void foo (int* num) {
    std::cout << *num;  // good
    *num += 2;          // good
}
```
<!-- .element: class="fragment fade-in" -->

When we want to be sure that no one will modify the value for us (we want to pass it read-only), we add `const`.
<!-- .element: class="fragment fade-in" -->

```cpp
void bar (int const* num) {
    std::cout << *num;  // good
    *num += 2;          // compilation error, num is a pointer to const
}
```
<!-- .element: class="fragment fade-in" -->

This is how you call this function:
<!-- .element: class="fragment fade-in" -->

```cpp
  int num = 5;
  foo(&num);
  bar(&num);
```
<!-- .element: class="fragment fade-in" -->

___

## Where to put `const`?

### What is this?

```cpp
const int * ptr;
```
<!-- .element: class="fragment fade-in" -->

A pointer to a constant (`const int`).
<!-- .element: class="fragment fade-in" -->

```cpp
int const * ptr;
```
<!-- .element: class="fragment fade-in" -->

Also the pointer to the constant (`const int = int const`).
<!-- .element: class="fragment fade-in" -->

```cpp
int * const ptr;
```
<!-- .element: class="fragment fade-in" -->

A constant pointer to a variable (`int`).
<!-- .element: class="fragment fade-in" -->

___

## Constant pointers versus pointers on constant

```cpp
int const * const ptr;
const int * const ptr;
```
<!-- .element: class="fragment fade-in" -->

Constant pointer to constant (`int const = const int`).
<!-- .element: class="fragment fade-in" -->

This is a common question from job interviews. For pointer to be constant, `const` must be after the asterisk.
<!-- .element: class="fragment fade-in" -->

___

## Differences

### Pointer to a constant

```cpp
const int * ptr = new int{42};
*ptr = 43;     // compilation error: assignment of read-only location ‘* ptr’
ptr = nullptr; // ok
```

* <!-- .element: class="fragment fade-in" --> We cannot modify the object pointed to by the pointer
  * Referring with `*` cannot modify the object
* <!-- .element: class="fragment fade-in" --> We can modify the pointer itself, e.g. to point to another object
  * Referring without `*` can modify the pointer

___

## Differences

### Constant pointer

```cpp
int * const ptr = new int{42};
*ptr = 43;     // ok
ptr = nullptr; // compilation error: assignment of read-only variable ‘ptr’
```

* <!-- .element: class="fragment fade-in" --> We can modify the object pointed to by the pointer
  * Referring with `*` can modify the object
* <!-- .element: class="fragment fade-in" --> We cannot modify the pointer itself, e.g. to point to another object
  * Referring without `*` cannot modify the pointer

___

### Constant pointer to constant

```cpp
const int * const ptr = new int{42};
*ptr = 43;     // compilation error: assignment of read-only location ‘* ptr’
ptr = nullptr; // compilation error: assignment of read-only variable ‘ptr’
```

* <!-- .element: class="fragment fade-in" --> We cannot modify the object pointed to by the pointer
  * Referring with `*` cannot modify the object
* <!-- .element: class="fragment fade-in" --> We cannot modify the pointer itself, e.g. to point to another object
  * Referring without `*` cannot modify the pointer

___
<!-- .slide: style="font-size: 0.9em" -->

## Task

Implement functions `foo()` and `bar()`.

`foo()` should modify the value passed by the pointer to 10, and `bar()` to 20.

Can either `foo()` or `bar()` take the pointer to a constant or constant pointer?

```cpp
#include <iostream>

// TODO: Implement foo() and bar()
// foo() should modify value under passed pointer to 10
// bar() should modify value under passed pointer to 20
// Can we have a pointer to const or a const pointer?
int main() {
    int number = 5;
    int* pointer = &number;
    std::cout << number << '\n';
    foo(&number);
    std::cout << number << '\n';
    bar(pointer);
    std::cout << number << '\n';

    return 0;
}
```

___
<!-- .slide: style="font-size: 0.9em" -->

## Differences between pointer and reference

### References <!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> We refer to references in the same way as to an ordinary object - by name
* <!-- .element: class="fragment fade-in" --> To get the item pointed to by the pointer we need to add <code>*</code> before the name of the indicator

### Passing as an argument <!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> The argument is a reference or a regular variable (copy) - we pass the name
* <!-- .element: class="fragment fade-in" --> The argument is a pointer and we pass the variable - we have to add <code>&</code> before the variable name.

### Symbols <!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> Symbol <code>*</code> (dereference operator) gives access to the referenced object
* <!-- .element: class="fragment fade-in" --> If we don't put <code>*</code> before the pointer we get the address of the pointed object
* <!-- .element: class="fragment fade-in" --> Symbol <code>&</code> means getting the address of our variable
* <!-- .element: class="fragment fade-in" --> The above makes sense because the pointer points to a memory location (the address of the pointed object)

___

## Differences in the code

```cpp
void copy(int a) { a += 2; }
void ref(int& a) { a += 2; }
void ptr(int* a) ( *a += 2; )

void example() {
    int c = 10;
    int& r = a;
    int* p = &a;  // typically int* p = new int{10};
    copy(c);
    copy(r);
    copy(*p);
    ref(c);
    ref(r);
    ref(*p);
    ptr(&c);
    ptr(&r);
    ptr(p);
}
```

___

## What does `*` mean in code?

```cpp
int a = 5 * 4;      // arithmetic operation - multiplying
int* b = &a;        // next to type - pointer to the type
int *c = &a;        // next to type - pointer to the type
std::cout << *b;    // next to pointer - access to object
int fun(int* wsk);  // in function argument - passing pointer (address)
```
<!-- .element: class="fragment fade-in" -->

## What does `&` mean in code?
<!-- .element: class="fragment fade-in" -->

```cpp
int a = 5 & 4;      // as arithmetic operation - bitwise AND
int& b = a;         // next to type - reference on type
int &c = a;         // next to type - reference on type
std::cout << &a;    // next to variable - address of this variable in memory
int fun(int& ref);  // in function argument - passing the address
```
<!-- .element: class="fragment fade-in" -->

___

## Important rule

Unless absolutely necessary, we don't use pointers at all.
