<!-- .slide: data-background="#111111" -->

# C ++ basics

## Summary

<a href="https://coders.school">
    <img width="500px" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## What do you remember from today?

### Write as many passwords as possible in the chat
<!-- .element: class="fragment fade-in" -->

1. <!-- .element: class="fragment fade-in" --> Data types
    * `void`, `bool`, `char`, `int`, `double` + their varieties
1. <!-- .element: class="fragment fade-in" --> Functions
    * signature (declaration) = return type, name, arguments
1. <!-- .element: class="fragment fade-in" --> Conditional statements
    * `if`, `switch/case`
1. <!-- .element: class="fragment fade-in" --> Loops
    * `for`, `while`, `do/while`
1. <!-- .element: class="fragment fade-in" --> Tables
    * `Type t[N]`, `operator[]`

___
<!-- .slide: style="font-size: 0.8em" -->

## Homework

### Post-work

<!-- * Jeśli nie wiesz czym jest `operator %` to się dowiedz. Przyda się do pracy domowej :) -->
* Read the documentation [std :: string](https://en.cppreference.com/w/cpp/string/basic_string). You will find there, among others description of the function `std::to_string`. Will be usefull :)
* Task 1 - Calculate (5 points)
* Task 2 - Fibonacci - recursion and iteration (6 points)
<!-- * Zadanie 3 - NWD (LCM) i NWW (GCD) (6 punktów) -->

#### Bonus for punctuality

For delivering each task before May 24, 2020 (Sunday) until 23:59 you will get 2 bonus points (4 points in total for 2 tasks).

### Pre-work

* Read the type documentation [std :: vector](https://en.cppreference.com/w/cpp/container/vector). Click on the different functions and look mainly at the usage examples at the bottom of the pages.
* You can look at the test files in the tasks and try to add your own test cases

#### [Repo jobs](https://github.com/coders-school/cpp-fundamentals/tree/master/module1/homework)

___
<!-- .slide: style="font-size: 0.7em" -->

## Task 1 - Calculate

Implement a function whose task is to perform arithmetic operations on two numbers.

Signature - `std::string calculate(const std::string& command, int first, int second)`.

### Parameters

* `const std::string& command` - type of action. One of `add`, `subtract`, `multiply`, `divide`
* `int first` - the first number
* `int second` - second number

### Return value

* `std::string` - the result of the action as text

In case of a wrong parameter `command` the function should return the string "Invalid data".

### Examples of use

```cpp
auto result = calculate("add", 2, 3);  // result = "5"
result = calculate("multiply", 2, 3);  // result = "6"
result = calculate("hello", 2, 3);     // result = "Invalid data"
```

___

## Task 2 - Fibonacci

Implement two functions. Both are to count the nth number [Fibonacci sequence](https://pl.wikipedia.org/wiki/Ciąg_Fibonacci), but in different ways.

* iterative (using loops)
* recursively (the function is supposed to call itself)

Functions must have specific signatures:

```cpp
int fibonacci_iterative(int sequence);
int fibonacci_recursive(int sequence);
```

___
<!-- .slide: style="font-size: 0.55em" -->

## Task delivery

1. Make a fork repo [c ++ - fundamentals](https://github.com/coders-school/cpp-fundamentals)
2. Get your fork - `git clone https://github.com/YOURNICK/cpp-fundamentals.git`
3. Change to the cpp-fundamentals directory - `cd cpp-fundamentals`
4. Create a branch named `calculate` to solve the problem calculate - `git checkout -b calculate`
5. Go to the directory module1 / homework / calculate - `cd module1/homework/calculate`
6. Here is the skeleton of the program that you must complete. The backbone of the program already includes tests to verify that your implementation is correct. Before starting the implementation, enter the following spells:

```bash
mkdir build   # tworzy katalog build
cd build      # przechodzi do katalogu build
cmake ..      # generuje system budowania wg przepisu z pliku ../CMakeLists.txt
make          # kompiluje
ctest -V      # odpala testy
```

7. Implement the functionality (preferably piecewise, e.g. start by adding only)
8. Check if the implementation passes the tests - `make` (compilation) and `ctest -V` (test launch)
9. Make a commit with a description of the functionality - `git commit -am"adding works"`
10. Go back to step 7 and implement the next piece. If the solution passes all the tests, go to the next step
11. Push changes to your fork - `git push origin calculate`
12. Click on Pull Request on GitHub.
13. Wait a moment for the Continuous Integration (CI) report to see if the solution compiles and tests on GitHub as well.
14. If there is ✅ - bravo, the solution is correct. If there is ❌ click on it and check the error description. Correct it (points 7-11) and wait for the next CI report.

___

## Delivery of subsequent tasks

First, go back to the main branch - `git checkout master` and proceed from step 4 for the next task (creating a new branch with a different name)

You may observe that switching to a different branch has resulted in you missing the solution for the first task. Relax, it's just on a different branch. You can return to it by going to the branch of this quest - `git checkout nazwa`.
