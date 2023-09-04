#pragma once
#include <string>

enum class ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode val);

bool doPasswordsMatch(std::string pass1, std::string pass2);

ErrorCode checkPasswordRules(std::string pass);

ErrorCode checkPassword(std::string pass1, std::string pass2);