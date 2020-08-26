<!-- .slide: data-background="#111111" -->

# C++ basics

## Summary

<a href="https://coders.school">
    <img width="500px" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## What do you remember from today?

### Write as many keywords as possible in the chat
<!-- .element: class="fragment fade-in" -->

1. <!-- .element: class="fragment fade-in" --> Data types
    * `void`, `bool`, `char`, `int`, `double` + their varieties
1. <!-- .element: class="fragment fade-in" --> Functions
    * signature (declaration) = return type, name, arguments
1. <!-- .element: class="fragment fade-in" --> Conditional statements
    * `if`, `switch/case`
1. <!-- .element: class="fragment fade-in" --> Loops
    * `for`, `while`, `do/while`
1. <!-- .element: class="fragment fade-in" --> Arrays
    * `Type t[N]`, `operator[]`

___
<!-- .slide: style="font-size: 0.8em" -->

## Homework

### Post-work

<!-- * If you don't know what `operator %` is then you have to read about it. It will prove useful in homework :) -->
* Read about [std::string](https://en.cppreference.com/w/cpp/string/basic_string) in the documentation. You will find there, among others, description of `std::to_string` function. It will be useful 🙂	
* Task 1 - Calculate (5 points)
* Task 2 - Fibonacci - recursion and iteration (6 points)
<!-- * Task 3 - LCM and GCD (6 punktów) -->

#### Bonus for punctuality

For delivering each task before May 24, 2020 (Sunday) until 23:59 you will get 2 bonus points (4 points in total for 2 tasks).

### Pre-work

* Read about the [std :: vector](https://en.cppreference.com/w/cpp/container/vector) type documentation. Click on the different functions and look mainly at the usage examples at the bottom of the pages.
* You can look at the test files in the tasks and try to add your own test cases

#### [Repo tasks](https://github.com/coders-school/cpp-fundamentals/tree/master/module1/homework)

___
<!-- .slide: style="font-size: 0.7em" -->

## Task 1 - Calculate

Implement a function whose task is to perform arithmetic operations on two numbers.

Signature - `std::string calculate(const std::string& command, int first, int second)`.

### Parameters

* `const std::string& command` - type of arithmetic operation. One of `add`, `subtract`, `multiply`, `divide`
* `int first` - first number
* `int second` - second number

### Return value

* `std::string` - the result of the operation as text

In case of a wrong parameter `command` the function should return the string "Invalid data".

### Examples

```cpp
auto result = calculate("add", 2, 3);  // result = "5"
result = calculate("multiply", 2, 3);  // result = "6"
result = calculate("hello", 2, 3);     // result = "Invalid data"
```

___

## Task 2 - Fibonacci

Implement two functions. Both are supposed to count the n-th number of [Fibonacci sequence](https://pl.wikipedia.org/wiki/Ciąg_Fibonacci), but in different ways.

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

1. Fork a repo [cpp-fundamentals](https://github.com/coders-school/cpp-fundamentals)
2. Get your fork - `git clone https://github.com/YOURNICK/cpp-fundamentals.git`
3. Go to the cpp-fundamentals directory - `cd cpp-fundamentals`
4. Create a branch named `calculate` for calculate problem solution - `git checkout -b calculate`
5. Go to the directory module1/homework/calculate - `cd module1/homework/calculate`
6. Here is the backbone of the program that you must complete. It already includes tests to verify that your implementation is correct. Before starting the implementation, enter the following commands:

```bash
mkdir build   # creates build directory
cd build      # change directory to build
cmake ..      # generates Makefile by following instructions from ../CMakeLists.txt
make          # compilation
ctest -V      # running tests
```

7. Implement the functionality (piece by piece, e.g. start from adding operation only)
8. Check if the implementation passes the tests - `make` (compilation) and `ctest -V` (test launch)
9. Make a commit with a description of the functionality - `git commit -am"adding works"`
10. Go back to step 7 and implement next functionality. If the solution passes all tests, go to the next step
11. Push changes to your fork - `git push origin calculate`
12. Click on Pull Request on GitHub.
13. Wait a moment for the Continuous Integration (CI) report to see if the solution compiles and tests pass on GitHub as well.
14. If there is ✅ - good job, the solution is correct. If there is ❌ click on it and check the error description. Correct it (points 7-11) and wait for the next CI report.

___

## Delivery of remaining tasks

First, go back to the main branch - `git checkout master` and proceed from step 4 for the next task (creating a new branch with a different name)

You may notice that switching to a different branch has resulted in you missing the solution for the first task. Don't worry, it's just on a different branch. You can return to it by going to the branch of this task - `git checkout nazwa`.
