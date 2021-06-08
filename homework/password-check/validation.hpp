// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <string>

constexpr size_t PASSWORD_MIN_LENGTH{9};

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters, 
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode);

bool doPasswordsMatch(const std::string, const std::string);

ErrorCode checkPasswordRules(const std::string);

ErrorCode checkPassword(const std::string, const std::string);

