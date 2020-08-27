<!-- .slide: data-background="#111111" -->

# C ++ basics

## Scope of variables

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Local variables

Local variables are variables that are viewed within a scope.
<!-- .element: class="fragment fade-in" -->

```cpp
{
    int local_variable = 5;
    // ...
}
local_variable = 10;   // error -> local_variable doesn't exists
```
<!-- .element: class="fragment fade-in" -->

The range is always formed by curly braces, including: <!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> same parentheses - <code>{ /* ... */ }</code>
* <!-- .element: class="fragment fade-in" --> function body - <code>void fun() { /* ... */ }</code>
* <!-- .element: class="fragment fade-in" --> conditional statements - <code>if (condition) { /* ... */ }</code>
* <!-- .element: class="fragment fade-in" --> loops - <code>while (condition) { /* ... */ }</code>

___

## Global variables

A global variable, it is visible to all scopes. We can always refer to it.
<!-- .element: class="fragment fade-in" -->

```cpp
int global_value = 5;

void foo() {
    std::cout << global_value;
}
  
int main() {
    std::cout << global_value;
}
```
<!-- .element: class="fragment fade-in" -->

Generating global variables is usually bad practice.
<!-- .element: class="fragment fade-in" -->

___

## What will appear on the screen?

```cpp
int number = 1;

int main() {
    int number = 2;
    {
        int number = 3;
        std::cout << number;
        std::cout << ::number;
    }
    std::cout << number;
    std::cout << ::number;
}
```
<!-- .element: class="fragment fade-in" -->

### 3121
<!-- .element: class="fragment fade-in" -->

___

## Overriding names

* <!-- .element: class="fragment fade-in" --> we can have many variables with the same name if they are in different ranges
  * <!-- .element: class="fragment fade-in" --> to avoid ambiguity this is rather not recommended
* <!-- .element: class="fragment fade-in" --> a name from the local scope always overrides the name from a wider scope (e.g. global)
* <!-- .element: class="fragment fade-in" --> you can refer to names from global scope using <code>::</code> (range operator)
