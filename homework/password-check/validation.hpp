#pragma once
#include <iostream>
#include <string>

//kody bledow
    enum ErrorCode {
    ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

//konwersja enum na string 
std::string getErrorMessage(int err);

//sprawdzenie poprawnosci hasel
bool doPasswordMatch (std::string wordOne, std::string wordTwo);

int checkPasswordRules (std::string pass);

//sprawdzenie hasla 
int checkPassword (std::string passFirst, std::string passSecond);
