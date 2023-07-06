// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordDoNotMatch
};

std::string getErrorMessage(enum code);

bool doPasswordsMatch(std::string password, std::string repeatedPassword);

ErrorCode checkPasswordRules(std::string password);

ErrorCode checkPassword(std::string password, std::string repeatedPassword);
