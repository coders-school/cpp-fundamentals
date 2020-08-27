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

1. <!-- .element: class="fragment fade-in" --> STL - what is it?
2. <!-- .element: class="fragment fade-in" --> <code>std::vector</code>
3. <!-- .element: class="fragment fade-in" --> Loop <code>for</code> after collection
4. <!-- .element: class="fragment fade-in" --> <code>std::string</code>
5. <!-- .element: class="fragment fade-in" --> <code>std::list</code>
6. <!-- .element: class="fragment fade-in" --> <code>std::map</code>

___
<!-- .slide: style="font-size: 0.8em" -->

## Homework

### Post-work

* If you don't know what it is `operator%` so find out. It will be useful for homework :)
* Task 1 - AddEven (4 points)
* Task 2 - GCD (LCM) and NWW (GCD) (6 points)
* Task 3 - MaxOfVector (5 points)
* Task 4 - GenerateSequence (5 points)

#### Bonus for punctuality

For delivering each task before 31/05/2020 (Sunday) until 23:59 you will get 2 bonus points (a total of 8 points for 4 tasks).

#### [Repo jobs](https://github.com/coders-school/cpp-fundamentals/tree/master/module2/homework)

___

### Pre-work

* Remember information about indicators, e.g. from [Mr. Zelent's video](https://www.youtube.com/watch?v=0DQl74alJzw)
* [Read about `enum`ah](http://cpp0x.pl/kursy/Kurs-C++/Typ-wyliczeniowy-enum/318)
* Get interested in the topic of smart pointers and look for information about what it is `std::shared_ptr` and `std::unique_ptr`
* Take a look at the files with tests in homework and try to add your own test cases

___

## Task 1 - AddEven

Write a function to adopt `std::vector<int>` and will return the sum of all its even elements.

Declaration - `int addEven(const std::vector<int>& numbers)`

If you don't know what the function should return in some cases, read the tests.

### Example of use

```cpp
std::vector<int> vec{1, 2, 3, 4, 5};
auto result = addEven(vec);  // result = 6;
```

___

## Task 2 - GCD (LCM) and NWW (GCD)

Implement two functions - GCD, which is to count the Greatest Common Divisor, and GCD, which is to count the Least Common Multiple of 2 numbers.
Watch out for unusual cases like 0 or negative numbers :)

### Example of use

```cpp
std::cout << "NWW(255, 15) = " << NWW(255, 15) << "\n";
std::cout << "NWD(255, 15) = " << NWD(255, 15) << "\n";
```

___

## Task 3 - MaxOfVector

Write a function that takes `std::vector<int>` and returns the largest element of this vector.

### Example of use

```cpp
std::vector<int> numbers = {6, 78, 12, 54, -11, 0};
auto result = maxOfVector(numbers);  // result = 78
```

___

## Task 4 - GenerateSequence

Write a function that takes 2 arguments:

* `int count`
* `int step`

and returns `std::vector<int>` having `count` elements and each of them is greater than the previous by `step`. The first is to be equal to `step`.

### Example of use

```cpp
auto result = generateSequence(5, 3);  // result = {3, 6, 9, 12, 15}
```

___

#### Bonus for working in pairs

For delivering tasks together with someone else, you will get an additional 3 points (per person). The commits of both people must be visible in the PR and it must be properly described:

Title: `Homework Podstawy C++ #2`

Description: `Authors: @github_nick1, @github_nick2 \n Some additional info`

All tasks should be delivered on one branch this time. The reporting person will get 2 points for the PR submission alone, but I will compensate this by adding 2 extra points to the other person.
The easiest way is for the second person to clone the repository of the former and the former to write permission to the latter.
You can also add a new remote repository in your previously cloned fork using `git remote add nazwa adres`.

___

#### Adding a contributor to the GitHub repo

![Add Collaborator](https://raw.githubusercontent.com/coders-school/cpp-fundamentals/master/module2/img/add_collaborator.png)

___

<!-- .slide: style="font-size: 0.6em" -->

## Task delivery (different to Basics # 1)

1. You already have a fork repo [c ++ - fundamentals](https://github.com/coders-school/cpp-fundamentals), can't fork again
2. If you're going to work in a pair, it's easiest if you give the other person permission to push into your repo. Choose `Role: Write`
3. You have already pulled your fork
4. Go to the repo directory - `cd cpp-fundamentals`
5. Add new remote repository - `git remote add coders https://github.com/coders-school/cpp-fundamentals.git`
6. Update the repository from the newly added address - `git fetch coders`
7. Switch to branch module2 - `git checkout module2`
8. You can now send the newly downloaded branch to your repo on GH - `git push origin module2`
9. Create a separate branch for homework - `git checkout -b homework2`
10. Send this branch to GitHub right away, before implementing anything - `git push origin homework2`
11. Implement (alone or together) solutions, making lots of tiny commits. In group work, you can share tasks so as not to get into a parade and create conflicts, but if you want to try the hardcore version right away, do the same task together :)
12. When submitting changes to GitHub, use the command `git push origin homework2`
13. When submitting a Pull Request, click that you want to deliver it to `coders-school/cpp-fundamentals` branch `module2`

___
<!-- .slide: style="font-size: 0.9em" -->

## Version for a person using a colleague's fork

1. Wait for your coworker to complete steps 1-10
2. Select a variant:
   * Make `git clone adres_repo_współpracownika` and work on it
   * Add a colleague's repo address to your clone repo `git remote add nick adres` and download changes from it - `git fetch nick`
3. Switch to the homework2 branch - `git checkout homework2`
4. Build projects, share the work, implement the solution.
5. Send changes to a colleague's GH - `git push nick homework2`
6. A co-worker will report a PR, you don't have to click anything :)
7. In case of problems, you can always switch to independent work
