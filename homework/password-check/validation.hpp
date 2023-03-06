#pragma once
#include <algorithm>
#include <string>
// TODO: I'm empty :) Put enum and function headers here.
enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode code);
bool doPasswordsMatch(std::string password, std::string repeatedPassword);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password, std::string repeatedPassword);
// Don't forget the header guard - #pragma once
