// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <string>


enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};


std::string getErrorMessage(ErrorCode msg);
bool doPasswordsMatch(std::string password1, std::string password2);
ErrorCode checkPasswordRules(std::string pass);
ErrorCode checkPassword(std::string pass1, std::string pass2);