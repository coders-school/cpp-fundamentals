#pragma once
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
std::string getErrorMessage(ErrorCode error_code);
bool doPasswordsMatch(const std::string& password_first, const std::string& password_second);
ErrorCode checkPasswordRules(const std::string& password);
ErrorCode checkPassword(const std::string& password_first, const std::string& password_second);
