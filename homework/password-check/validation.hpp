#pragma once
#include <string>

enum ErrorCode {
    Ok = 0,
    PasswordNeedsAtLeastNineCharacters = 1,
    PasswordNeedsAtLeastOneNumber = 2,
    PasswordNeedsAtLeastOneSpecialCharacter = 3,
    PasswordNeedsAtLeastOneUppercaseLetter = 4,
    PasswordsDoNotMatch = 5
};

std::string getErrorMessage(ErrorCode code);
bool doPasswordsMatch(std::string pass1, std::string pass2);
ErrorCode checkPasswordRules(std::string pass);
ErrorCode checkPassword(std::string pass1, std::string pass2);
