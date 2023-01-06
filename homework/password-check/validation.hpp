// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

#include <iostream>
#include <string>
#pragma once

enum ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(enum ErrorCode error);
bool doPasswordsMatch(std::string password1, std::string password2);
enum ErrorCode checkPasswordRules(std::string password);
enum ErrorCode checkPassword(std::string password1, std::string password2);

