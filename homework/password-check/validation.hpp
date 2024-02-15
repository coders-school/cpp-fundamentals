#pragma once

enum class Error {
        Ok,
        PasswordNeedsAtLeastNineCharacters,
        PasswordNeedsAtLeastOneNumber,
        PasswordNeedsAtLeastOneSpecialCharacter,
        PasswordNeedsAtLeastOneUppercaseLetter,
        PasswordsDoNotMatch
    };
std::string getErrorMessage(int errcode);
bool doPasswordsMatch(std::string psw1, std::string psw2);
int checkPasswordRules(std::string pass);
int checkPassword(std::string firstpassword, std::string secondpassword);
