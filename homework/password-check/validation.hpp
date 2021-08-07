// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

#include <string>

const int minimumPasswordLength = 9;

enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};


std::string getErrorMessage(ErrorCode code);
bool doPasswordsMatch(std::string first, std::string second);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string first, std::string second);

bool containsAtLeastOneNumber(std::string password);
bool containsAtLeastOneUppercaseLetter(std::string password);
bool containsAtLeastOneSpecialCharacter(std::string password);