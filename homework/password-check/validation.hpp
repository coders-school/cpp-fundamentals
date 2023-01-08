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

std::string getErrorMessage(ErrorCode errorCode);

bool doPasswordsMatch(std::string password, std::string passwordRepeated);

ErrorCode checkPasswordRules(std::string password);

ErrorCode checkPassword(std::string password, std::string passwordRepeated);

