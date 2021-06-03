#pragma once

#include <string>

enum class ErrorCode : unsigned char {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

const std::string& getErrorMessage(const ErrorCode error);

bool doPasswordsMatch(const std::string& first, const std::string& second);

ErrorCode checkPasswordRules(const std::string& password);

ErrorCode checkPassword(const std::string& first, const std::string& second);
