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

std::string getErrorMessage(const ErrorCode& errorCode);
bool doPasswordsMatch(const std::string& first,const std::string& second);
ErrorCode checkPasswordRules(const std::string& password);
ErrorCode checkPassword(const std::string& first, const std::string& second);