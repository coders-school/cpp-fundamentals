<!-- .slide: data-background="#111111" -->

# C ++ basics

## References

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## &

Magic badge `&` stands for reference.

```cpp
int value = 5;
int & number = value;
```

The above notation denotes a variable `num` type `int&`, which is a reference to a type `int`.
<!-- .element: class="fragment fade-in" -->

It doesn't matter if we stick the reference to the type or name of the variable, but the reference is a separate type, so we suggest not to stick it to the variable name.
<!-- .element: class="fragment fade-in" -->

```cpp
int& number = value;  // lewak
int &number = value;  // prawak (odradzane)
int & number = value; // neutralny
```
<!-- .element: class="fragment fade-in" -->
___

### What is a reference?

Let's look at a code snippet.

```cpp
int number = 5;
int& refer = number;

std::cout << refer << '\n';   // 5
std::cout << ++refer << "\n"; // 6
std::cout << number << "\n";  // 6
```

* <!-- .element: class="fragment fade-in" --> The reference refers to an existing object
* <!-- .element: class="fragment fade-in" --> If we create an object <code>int value</code> it through references <code>int& reference = value</code> we will be able to refer to it directly.
* <!-- .element: class="fragment fade-in" --> Reference is another, additional name for the same variable (alias)
* <!-- .element: class="fragment fade-in" --> Modifying a reference = modifying the original object

___

### What do we gain in this way?

* <!-- .element: class="fragment fade-in" --> We don't need to copy items. It is enough for us to provide references.
  * This way, we can freely read the value of this variable in many places in the program, without unnecessary copying it.
* <!-- .element: class="fragment fade-in" --> A reference takes up as much in memory as an address (4 or 8 bytes).
* <!-- .element: class="fragment fade-in" --> Building a reference to a type <code>int</code> (usually 4 bytes) does not always make optimization sense, unless you want to modify this element inside a function.
* <!-- .element: class="fragment fade-in" --> Passing arguments by reference will make more sense when we get to know classes and objects :)

[How much space does a reference take? - stackoverflow.com](https://stackoverflow.com/questions/1179937/how-does-a-c-reference-look-memory-wise)
<!-- .element: class="fragment fade-in" -->

___

### How to pass an element by reference?

```cpp
void foo(int& num) {
    std::cout << num; // good
    num += 2;         // good
}
```
<!-- .element: class="fragment fade-in" -->

If we want to be sure that the function will not modify the value (we want to pass it read-only), we add `const`.
<!-- .element: class="fragment fade-in" -->

```cpp
void bar(const int& num) {
    std::cout << num; // good
    num += 2;         // compilation error, num is const reference
}
```
<!-- .element: class="fragment fade-in" -->

A function call is simply:
<!-- .element: class="fragment fade-in" -->

```cpp
int num = 5;
foo(num);
bar(num);
```
<!-- .element: class="fragment fade-in" -->

___

## Task

Implement the function `foo()`. It is to accept and modify the text provided. We want to see on the screen `"Other string"`.

```cpp
#include <iostream>
#include <string>

// TODO: Implement foo()
// It should modify passed string to text "Other string"

int main() {
    std::string str("Some string");
    foo(str);
    std::cout << str << '\n';
    return 0;
}
```

___

## Summary

* <!-- .element: class="fragment fade-in" --> reference is an alias (another name for a variable)
* <!-- .element: class="fragment fade-in" --> a reference modification is a modification of the original object
* <!-- .element: class="fragment fade-in" --> when passing a parameter by reference:
  * we avoid unnecessary copies
  * object modification will result in modification of the original passed to the function
