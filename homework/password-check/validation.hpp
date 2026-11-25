#pragma once
#include <string>
#include <cctype>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};


ErrorCode checkPassword(const std::string& password, const std::string& confirmPassword);
std::string getErrorMessage(ErrorCode result);
bool doPasswordsMatch(const std::string& password, const std::string& confirmPassword);
ErrorCode checkPasswordRules(const std::string& password);
