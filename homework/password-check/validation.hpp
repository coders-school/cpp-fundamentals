#pragma once
#include <string>

enum ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(int code);

int checkPasswordRules(std::string pass);

int checkPassword(std::string first, std::string second);

bool doPasswordsMatch(std::string, std::string);

// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once