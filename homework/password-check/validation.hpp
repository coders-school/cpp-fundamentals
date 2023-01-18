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

bool isInStringIsDigit(std::string password);
bool isInStringIsUppercase(std::string password);
bool isInStringIsSpecialCharacter(std::string password);

std::string getErrorMessage(ErrorCode errorCode);
bool doPasswordsMatch(std::string password, std::string passwordRepeated);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password, std::string passwordRepeated);
