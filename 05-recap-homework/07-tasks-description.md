<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Opisy zadań

<a href="https://coders.school">
    <img width="500px" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Praca domowa

### Post-work

* password-check (8 XP + 4 XP bonus)
* vector-of-shared-pointers (5 XP)

#### Bonus za punktualność

* **02.06.2021 (środa)** to ostatni dzień na zebranie bonusowych punktów za punktualność
* **3 XP** wpadną Ci za każde zadanie dostarczone w terminie (razem 6 punktów)

#### [Zadania w repo](https://github.com/coders-school/cpp-fundamentals/tree/master/05-recap-homework/07-tasks-description.md)

___

### Pre-work

* [Playlista na YT odnośnie STLa](https://www.youtube.com/playlist?list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb) - obejrzyj ile możesz :)
* Przypomnij sobie czym jest klasa i jak się ją pisze - [obejrzyj wideo Mirosława Zelenta](https://www.youtube.com/watch?v=aDXjubGK0jU). UWAGA! Od 22 minuty możesz zaobserwować trochę złych praktyk :D Spróbuj odgadnąć jakich.

___

## password-check

Tworzysz moduł do sprawdzania reguł haseł, który otrzymuje dane z formularza kontaktowego z front-endu. Cały moduł to zestaw kilku funkcji. Ich deklaracje mają znaleźć się w pliku nagłówkowym `validation.hpp`, a implementacje w pliku źródłowym `validation.cpp`. Twoje zadania to:

1. Zdefiniuj w pliku nagłówkowym nowy typ `ErrorCode` z możliwymi wartościami dla błędów przy ustalaniu nowego hasła. Jaki typ zastosujesz?

   * Ok
   * PasswordNeedsAtLeastNineCharacters
   * PasswordNeedsAtLeastOneNumber
   * PasswordNeedsAtLeastOneSpecialCharacter
   * PasswordNeedsAtLeastOneUppercaseLetter
   * PasswordsDoNotMatch

___
<!-- .slide: style="font-size: 0.9em" -->

## password-check cd.

2. Napisz funkcję `getErrorMessage()`, która przyjmie zdefiniowany typ kodu błędu i zwróci stosowny komunikat jako napis. Taka konwersja `enum`a na `string`.
3. Napisz funkcję `doPasswordsMatch()`, która otrzyma dwa hasła i sprawdzi czy są identyczne. Powinna zwrócić odpowiednią wartość typu bool.
4. Napisz funkcję `checkPasswordRules()`, która przyjmie jedno hasło i **losowo** zwróci jeden z kodów błędu `PasswordNeedsAtLeast*` lub `Ok`.
5. Napisz funkcję `checkPassword()`. Powinna ona przyjąć dwa hasła i używać funkcji `doPasswordsMatch()` w celu określenia czy hasła się zgadzają. W przypadku gdy się nie zgadzają ma ona zwrócić kod błędu `PasswordsDoNotMatch`, a w przeciwnym przypadku powinna wywołać funkcję `checkPasswordRules()` i zwrócić kod błędu zwrócony przez nią.

___

## password-check bonus

6. Dla ambitnych (nieobowiązkowe) - zaimplementuj w funkcji `checkPasswordRules()` prawdziwą walidację pozostałych przypadków, które są podane jako kody błędów. Wskazówka - możesz wykorzystać funkcje z [nagłówka <cctype>](https://en.cppreference.com/w/cpp/header/cctype) oraz algorytmy [`std::any_of/std::none_of`](https://en.cppreference.com/w/cpp/algorithm/all_any_none_of). Jeśli to dla Ciebie za trudne, zrób to po swojemu 🙂 (4 XP)

___

## password-check - Przykład użycia

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
<!-- .slide: style="font-size: 0.73em" -->

## vector-of-shared-pointers

Napisz program, który zawierać będzie 5 funkcji. Deklaracje powinny znaleźć się w pliku nagłówkowym `vectorFunctions.hpp`, a implementacje w pliku źródłowym `vectorFunctions.cpp`. Stwórz te pliki.

1. `std::vector<std::shared_ptr<int>> generate(int count)` która wygeneruje wektor współdzielonych wskaźników na liczby od `0` do `count`
2. `void print()` która przyjmie `vector` i wypisze wszystkie elementy ze wskaźników wektora
3. `void add10()` która przyjmie `vector` i doda do każdej liczby `10`
4. `void sub10()` która przyjmie stały wskaźnik (zwykły) na `int` i odejmie od tego elementu `10`
5. `void sub10()` Która przyjmie wektor współdzielonych wskaźników i wywoła dla każdego elementu powyższe przeciążenie funkcji `sub10()`

### Przykład użycia

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
