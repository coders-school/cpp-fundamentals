#pragma once
#include <iostream>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode err);
ErrorCode checkPassword(std::string first, std::string second);
ErrorCode checkPasswordRules(std::string pass);
bool doPasswordsMatch(std::string first, std::string second);
