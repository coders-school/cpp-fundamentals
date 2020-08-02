#pragma once
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoesNotMatch
};

std::string getErrorMessage(ErrorCode);
bool doesPasswordsMatch(const std::string &, const std::string &);
ErrorCode checkPasswordRules(const std::string &);
ErrorCode checkPassword(const std::string &, const std::string &);
