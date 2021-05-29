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

std::string getErrorMessage(ErrorCode code);
bool doPasswordsMatch(std::string password1, std::string password2);
std::string checkPasswordRules(std::string password);
std::string checkPassword(std::string password1, std::string password2);