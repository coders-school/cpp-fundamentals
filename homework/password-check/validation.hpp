#pragma once
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};

std::string getErrorMessage(enum ErrorCode code);

bool doPasswordsMatch(std::string password1, std::string password2);

enum ErrorCode checkPassword(std::string password1, std::string password2);

enum ErrorCode checkPasswordRules(std::string password);

