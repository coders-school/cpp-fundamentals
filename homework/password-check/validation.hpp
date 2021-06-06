// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <string>

enum class ErrorCode
{
    Ok = 1,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber = 10,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

// Gets error type and yield appropiate message 
// to the error
void getErrorMessage(ErrorCode errorType);

// @param password
// Checks whether passwords are the same
bool doPasswordsMatch(std::string firstPassword, std::string secondPassword);

ErrorCode checkPasswordRules(std::string password);

ErrorCode checkPassword();

