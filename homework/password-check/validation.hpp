#pragma once

#include <algorithm>
#include <cctype>
#include <map>
#include <string>

enum class ErrorCode : unsigned char {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode error);

bool doPasswordsMatch(const std::string& first, const std::string& second);

ErrorCode checkPasswordRules(const std::string& password);

ErrorCode checkPassword(const std::string& first, const std::string& second);
