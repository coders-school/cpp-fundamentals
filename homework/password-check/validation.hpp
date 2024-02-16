#pragma once
#include <string>

enum class ErrorCode {
        Ok,
        PasswordNeedsAtLeastNineCharacters,
        PasswordNeedsAtLeastOneNumber,
        PasswordNeedsAtLeastOneSpecialCharacter,
        PasswordNeedsAtLeastOneUppercaseLetter,
        PasswordsDoNotMatch
};
std::string getErrorMessage(int errcode);
bool doPasswordsMatch(std::string psw1, std::string psw2);
ErrorCode checkPasswordRules(std::string pass);
ErrorCode checkPassword(std::string firstpassword, std::string secondpassword);
