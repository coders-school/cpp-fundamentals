#pragma once
#include "regex"
#include "string"

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode code);

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword);

ErrorCode checkPasswordRules(const std::string& password);

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword);
