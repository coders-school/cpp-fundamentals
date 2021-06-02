// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <iostream>

enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
std::string getErrorMessage(ErrorCode e);

bool doPasswordsMatch(std::string a, std::string b);

ErrorCode checkPasswordRules(std::string pass);

ErrorCode checkPassword(std::string a, std::string b);
