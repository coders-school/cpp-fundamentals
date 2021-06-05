// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once 
#include <string>

enum class ErrorCode{
    Ok = 1,
    PasswordNeedsAtLeastNineCharacters = 9,
    PasswordNeedsAtLeastOneNumber = 11,
    PasswordNeedsAtLeastOneSpecialCharacter = 12,
    PasswordNeedsAtLeastOneUppercaseLetter = 99,
    PasswordsDoNotMatch = 1111
};

ErrorCode checkPassword(std::string password, std::string repeatedPassword);

std::string getErrorMessage(ErrorCode code);
