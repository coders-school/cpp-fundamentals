// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once

#include <string>
#include <stdlib.h>

enum class ErrorCode
{
    Ok = 0,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(const ErrorCode &e);

bool doPasswordsMatch(const std::string &p1, const std::string &p2);

ErrorCode checkPasswordRules(const std::string p1);

ErrorCode checkPassword(const std::string &p1, const std::string &p2);