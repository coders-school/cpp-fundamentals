# PasswordCheck

Tworzysz moduł do sprawdzania reguł haseł, który otrzymuje dane z formularza kontaktowego z front-endu. Cały moduł to zestaw kilku funkcji. Ich deklaracje mają znaleźć się w pliku nagłówkowym `validation.hpp`, a implementacje w pliku źródłowym `validation.cpp`. Twoje zadania to:

1. Zdefiniuj w pliku nagłówkowym nowy typ `ErrorCode` z możliwymi wartościami dla błędów przy ustalaniu nowego hasła. Jakiego typu użyjesz?

   * Ok
   * PasswordNeedsAtLeastNineCharacters
   * PasswordNeedsAtLeastOneNumber
   * PasswordNeedsAtLeastOneSpecialCharacter
   * PasswordNeedsAtLeastOneUppercaseLetter
   * PasswordsDoNotMatch

2. Napisz funkcję `getErrorMessage()`, która przyjmie zdefiniowany typ kodu błędu i zwróci stosowny komunikat jako napis.
3. Napisz funkcję `doPasswordsMatch()`, która otrzyma dwa hasła i sprawdzi czy są identyczne. Powinna zwrócić odpowiednią wartość typu bool.
4. Napisz funkcję `checkPasswordRules()`, która przyjmie jedno hasło i losowo zwróci jeden z kodów `PasswordNeedsAtLeast*` lub `Ok`.
5. Napisz funkcję `checkPassword()`. Powinna ona przyjąć dwa hasła i używać funkcji `doPasswordsMatch()` w celu określenia czy hasła się zgadzają. W przypadku gdy się nie zgadzają ma ona zwrócić kod `PasswordsDoNotMatch`, a w przeciwnym przypadku powinna zwrócić kod błędu zwrócony przez wywołanie funkcji `checkPasswordRules()`.
6. Dla ambitnych (nieobowiązkowe) - zaimplementuj w funkcji `checkPasswordRules()` prawdziwą walidację pozostałych przypadków, które są podane jako kody błędów. Najlepiej, jeśli wykorzystasz funkcje z [nagłówka <cctype>](https://en.cppreference.com/w/cpp/header/cctype) oraz algorytm `std::any_of`. Dopisz/zmodyfikuj odpowiednie testy. (+4 XP)

## Przykład użycia

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
