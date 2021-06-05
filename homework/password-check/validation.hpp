// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once 
#include <string>

enum class ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode code);

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword);

ErrorCode checkPasswordRules(const std::string& password);

ErrorCode checkPassword(const std::string password, const std::string repeatedPassword);