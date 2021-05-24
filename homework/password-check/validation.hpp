#pragma once
#include <string>
#include <cctype>
#include <algorithm>


enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
}

std::string getErrorMessage(const ErrorCode&);
bool doPasswordsMatch(const std::string&, const std::string&);
ErrorCode checkPasswordRules(const std::string&);