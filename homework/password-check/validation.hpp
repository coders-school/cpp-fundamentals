// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

#pragma once

#include <string>

enum class ErrorCode : uint8_t
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};

ErrorCode checkPassword(std::string password, std::string repeatedPassword);

bool doPasswordsMatch(std::string password, std::string repeatedPassword);

ErrorCode checkPasswordRules(std::string password);

std::string getErrorMessage(ErrorCode errorCode);
