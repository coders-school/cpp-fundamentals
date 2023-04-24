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

std::string getErrorMessage(ErrorCode errorNumber);
bool doPasswordsMatch(std::string firstPassword, std::string secondPassword);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string firstPassword, std::string secondPassword);