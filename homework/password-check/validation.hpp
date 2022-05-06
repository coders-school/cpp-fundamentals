#pragma once
#include <string>

// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode errorCode);
bool doPasswordsMatch(std::string first, std::string second);
ErrorCode checkPasswordRules(const std::string password);
ErrorCode checkPassword(std::string first, std::string second);