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

1. <!-- .element: class="fragment fade-in" --> Scopes
2. <!-- .element: class="fragment fade-in" --> Reference
3. <!-- .element: class="fragment fade-in" --> Indicators
4. <!-- .element: class="fragment fade-in" --> Threats when using references and indicators
5. <!-- .element: class="fragment fade-in" --> Enumerated type <code>enum</code> and <code>enum class</code>

___
<!-- .slide: style="font-size: 0.8em" -->

## Homework

### Post-work

* Task 1 - PasswordCheck
* Task 2 - VectorOfSharedPointers

#### Bonus for punctuality

For delivering each task before 07/06/2020 (Sunday) until 23:59 you will get 2 bonus points for each task

#### [Repo jobs](https://github.com/coders-school/cpp-fundamentals/tree/master/module3/homework)

___

### Pre-work

* [Playlist on YT regarding STL](https://www.youtube.com/playlist?list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb) - watch as much as you can :)
* Recall what a class is and how it is written - [watch the video of Mirosław Zelent](https://www.youtube.com/watch?v=aDXjubGK0jU). WARNING! From the 22nd minute you can observe some bad practices: D Try to guess which ones.

___

## The PasswordCheck task

You create a password rule checker that receives data from a front-end contact form. The entire module is a set of several functions. Their declarations are to be included in the header file `validation.hpp`and the implementations in the source file `validation.cpp`. Your tasks are:

1. Define a new type in the header file `ErrorCode` with possible values ​​for errors when setting a new password (1 point)

   * Ok
   * PasswordNeedsAtLeastNineCharacters
   * PasswordNeedsAtLeastOneNumber
   * PasswordNeedsAtLeastOneSpecialCharacter
   * PasswordNeedsAtLeastOneUppercaseLetter
   * PasswordsDoesNotMatch

___
<!-- .slide: style="font-size: 0.7em" -->

## PasswordCheck Task continued.

2. Write a function `getErrorMessage()`which will take the defined type of error code and return the appropriate message as a string. (1 point)
3. Write a function `doesPasswordsMatch()`which will receive two passwords and check if they are identical. Should return an appropriate bool value. (1 point)
4. Write a function `checkPasswordRules()`which will accept one password and randomly return one of the codes `PasswordNeedsAtLeast*` or `Ok`. (2 points)
5. Write a function `checkPassword()`. It should accept two passwords and use the function `doesPasswordsMatch()` to determine if the passwords match. If they do not match, it will return the code `PasswordsDoesNotMatch`otherwise, it should return the error code returned by the function call `checkPasswordRules()`. (2 points)
6. For ambitious (optional) - implement it in the function `checkPasswordRules()` true validation of the remaining cases which are given as error codes. Ideally, you should use the features of z [<cctype> header](https://en.cppreference.com/w/cpp/header/cctype) and the algorithm `std::any_of`. Add / modify appropriate tests. (4 points)

Total: 7 points (+4 for ambitious, +2 for delivery before 07/06/2020 23:59, +3 points / person for working in a pair)

___

## PasswordCheck Task - Usage Example

```cpp
int main() {
    std::string password;
    std::string repeatedPassword;
    std::cout << "Set new password: ";
    std::cin >> password;
    std::cout << "Repeat password: ";
    std::cin >> repeatedPassword;
    auto result = checkPassword(password, repeatedPassword);
    std::cout << getErrorMessage(result) << '\n';

    return 0;
}
```

___
<!-- .slide: style="font-size: 0.75em" -->

## The VectorOfSharedPointers task

Write a program that will contain 5 functions. Declarations should be included in the header file `vectorFunctions.hpp`and the implementations in the source file `vectorFunctions.cpp`. Create these files.

* `std::vector<std::shared_ptr<int>> generate(int count)` which will generate a vector of shared pointers to numbers from `0` down `count`
* `void print()` which will print all the elements from the vector pointers
* `void add10()` which will take a vector and add it to each number `10`
* `void sub10()` which will take a constant pointer to `int` and subtract from this element `10`
* `void sub10();` Which will take a vector of shared pointers and call the above function overload for each element `sub10()`

Total: 5 points (1 for each function) (+2 for delivery before 07/06/2020 11:59 pm, +3 points / person for working in a pair)

### Example of use

```cpp
int main() {
    auto vec = generate(10);
    print(vec);
    add10(vec);
    print(vec);
    sub10(vec);
    print(vec);
}
```

___
<!-- .slide: style="font-size: 0.75em" -->

## Task delivery

1. If you don't already have the cpp-fundamentals repo fork and remote coders attached to it, see the earlier C ++ Basics # 2 and # 1 homework.
2. Update your repo from remote coders - `git fetch coders`
3. Switch to branch module3 - `git checkout module3`
4. Send branch module 3 to your photo - `git push origin module3`
5. Create a separate branch for homework - `git checkout -b homework3`
6. Send this branch to the fork right away, before starting the implementation - `git push origin homework3`
7. Start the implementation alone or in pair.
8. Before you submit your changes with `git push origin homework3` sync with the fork to check if the other person has already delivered something - `git pull --rebase origin homework3`. If there are conflicts, resolve them.
9. When submitting a Pull Request, click that you want to deliver it to `coders-school/cpp-fundamentals` branch `module3`. Describe it appropriately adding information about the authors of the code.

___

## Next classes

* Review of C ++ basics and tools
* Discussion of solutions to previous tasks
* Overview of the most common errors based on Code Review
* Q&A
* Comments
* Group consultation on Discord
