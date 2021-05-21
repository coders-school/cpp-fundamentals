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
<!-- .slide: style="font-size: 0.75em" -->

## vector-of-shared-pointers

Napisz program, który zawierać będzie 5 funkcji. Deklaracje powinny znaleźć się w pliku nagłówkowym `vectorFunctions.hpp`, a implementacje w pliku źródłowym `vectorFunctions.cpp`. Stwórz te pliki.

* `std::vector<std::shared_ptr<int>> generate(int count)` która wygeneruje wektor współdzielonych wskaźników na liczby od `0` do `count`
* `void print()` która wypisze wszystkie elementy ze wskaźników wektora
* `void add10()` która przyjmie wektor i doda do każdej liczby `10`
* `void sub10()` która przyjmie stały wskaźnik na `int` i odejmie od tego elementu `10`
* `void sub10();` Która przyjmie wektor współdzielonych wskaźników i wywoła dla każdego elementu powyższe przeciążenie funkcji `sub10()`

Razem: 5 punktów (1 za każdą funkcję) (+2 za dostarczenie przed 07.06.2020 23:59, +3 punkty/osobę za pracę w parze)

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

___
<!-- .slide: style="font-size: 0.75em" -->

## Dostarczenie zadań

1. Jeśli nie masz jeszcze forka repo cpp-fundamentals i podpiętego w nim remote coders, to zobacz wcześniejsze prace domowe z Podstaw C++ #2 oraz #1.
2. Zaktualizuj swoje repo z remote'a coders - `git fetch coders`
3. Przełącz się na branch module3 - `git checkout module3`
4. Wyślij branch module3 na swojego forka - `git push origin module3`
5. Utwórz oddzielną gałąź na pracę domową - `git checkout -b homework3`
6. Wyślij od razu tę gałąź na forka, zanim zaczniesz implementację - `git push origin homework3`
7. Rozpocznij implementację samemu lub w parze.
8. Zanim wyślesz swoje zmiany za pomocą `git push origin homework3` synchronizuj się z forkiem, aby sprawdzić, czy druga osoba już czegoś nie dostarczyła - `git pull --rebase origin homework3`. Jeśli będą konflikty to je rozwiąż.
9. Przy zgłoszeniu Pull Requesta wyklikaj, że chcesz go dostarczyć do `coders-school/cpp-fundamentals` branch `module3`. Opisz go odpowiednio dodając informację o autorach kodu.

___

## Kolejne zajęcia

* Powtórka z podstaw C++ i narzędzi
* Omówienie rozwiązań dotychczasowych zadań
* Omówienie najczęstszych błędów na podstawie Code Review
* Q&A
* Uwagi
* Konsultacje grupowe na Discordzie
