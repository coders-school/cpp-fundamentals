#pragma once
#include <string>
#include <algorithm>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
std::string getErrorMessage(ErrorCode error);
bool doPasswordsMatch(std::string pass1, std::string pass2);
ErrorCode checkPasswordRules(const std::string pass);
ErrorCode checkPassword(std::string password, std::string repeatedPassword);