#pragma once

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

bool doPasswordsMatch(std::string first, std::string second);

ErrorCode checkPasswordRules(std::string password);

ErrorCode checkPassword(std::string first, std::string second);