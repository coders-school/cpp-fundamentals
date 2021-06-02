#pragma once
#include <iostream>
#include <string>
// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode ErrorCode);
bool doPasswordsMatch(std::string password, std::string repeatedPassword);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password, std::string repeatedPassword);