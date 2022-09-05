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

std::string getErrorMessage(enum ErrorCode error);
bool doPasswordsMatch(const std::string& pass1, const std::string pass2);
enum ErrorCode checkPasswordRules(const std::string& pass);
enum ErrorCode checkPassword(const std::string& pass1, const std::string pass2);