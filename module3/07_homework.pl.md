<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Podsumowanie

<a href="https://coders.school">
    <img width="500px" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Co pamiętasz z dzisiaj?

### Napisz na czacie jak najwięcej haseł
<!-- .element: class="fragment fade-in" -->

1. <!-- .element: class="fragment fade-in" --> Zakresy (scopes)
2. <!-- .element: class="fragment fade-in" --> Referencje
3. <!-- .element: class="fragment fade-in" --> Wskaźniki
4. <!-- .element: class="fragment fade-in" --> Zagrożenia przy stosowaniu referencji i wskaźników
5. <!-- .element: class="fragment fade-in" --> Typ wyliczeniowy <code>enum</code> i <code>enum class</code>

___
<!-- .slide: style="font-size: 0.8em" -->

## Praca domowa

### Post-work

* Zadanie 1 - PasswordCheck
* Zadanie 2 - VectorOfSharedPointers

#### Bonus za punktualność

Za dostarczenie każdego zadania przed 07.06.2020 (niedziela) do 23:59 dostaniesz 2 bonusowe punkty za każde zadanie

#### [Zadania w repo](https://github.com/coders-school/cpp-fundamentals/tree/master/module3/homework)

___

### Pre-work

* [Playlista na YT odnośnie STLa](https://www.youtube.com/playlist?list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb) - obejrzyj ile możesz 🙂
* Przypomnij sobie czym jest klasa i jak się ją pisze - [obejrzyj wideo Mirosława Zelenta](https://www.youtube.com/watch?v=aDXjubGK0jU). UWAGA! Od 22 minuty możesz zaobserwować trochę złych praktyk 😃 Spróbuj odgadnąć jakich.

___

## Zadanie PasswordCheck

Tworzysz moduł do sprawdzania reguł haseł, który otrzymuje dane z formularza kontaktowego z front-endu. Cały moduł to zestaw kilku funkcji. Ich deklaracje mają znaleźć się w pliku nagłówkowym `validation.hpp`, a implementacje w pliku źródłowym `validation.cpp`. Twoje zadania to:

1. Zdefiniuj w pliku nagłówkowym nowy typ `ErrorCode` z możliwymi wartościami dla błędów przy ustalaniu nowego hasła (1 punkt)

   * Ok
   * PasswordNeedsAtLeastNineCharacters
   * PasswordNeedsAtLeastOneNumber
   * PasswordNeedsAtLeastOneSpecialCharacter
   * PasswordNeedsAtLeastOneUppercaseLetter
   * PasswordsDoesNotMatch

___
<!-- .slide: style="font-size: 0.7em" -->

## Zadanie PasswordCheck cd.

2. Napisz funkcję `getErrorMessage()`, która przyjmie zdefiniowany typ kodu błędu i zwróci stosowny komunikat jako napis. (1 punkt)
3. Napisz funkcję `doesPasswordsMatch()`, która otrzyma dwa hasła i sprawdzi czy są identyczne. Powinna zwrócić odpowiednią wartość typu bool. (1 punkt)
4. Napisz funkcję `checkPasswordRules()`, która przyjmie jedno hasło i losowo zwróci jeden z kodów `PasswordNeedsAtLeast*` lub `Ok`. (2 punkty)
5. Napisz funkcję `checkPassword()`. Powinna ona przyjąć dwa hasła i używać funkcji `doesPasswordsMatch()` w celu określenia czy hasła się zgadzają. W przypadku gdy się nie zgadzają ma ona zwrócić kod `PasswordsDoesNotMatch`, a w przeciwnym przypadku powinna zwrócić kod błędu zwrócony przez wywołanie funkcji `checkPasswordRules()`. (2 punkty)
6. Dla ambitnych (nieobowiązkowe) - zaimplementuj w funkcji `checkPasswordRules()` prawdziwą walidację pozostałych przypadków, które są podane jako kody błędów. Najlepiej, jeśli wykorzystasz funkcje z [nagłówka <cctype>](https://en.cppreference.com/w/cpp/header/cctype) oraz algorytm `std::any_of`. Dopisz/zmodyfikuj odpowiednie testy. (4 punkty)

Razem: 7 punktów (+4 dla ambitnych, +2 za dostarczenie przed 07.06.2020 23:59, +3 punkty/osobę za pracę w parze)

___

## Zadanie PasswordCheck - Przykład użycia

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

## Zadanie VectorOfSharedPointers

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
