// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

#pragma once
#include<string>

enum class ErrorCode {
    Ok, // '0'
    PasswordNeedsAtLeastNineCharacters, // '1'
    PasswordNeedsAtLeastOneNumber,  // '2'
    PasswordNeedsAtLeastOneSpecialCharacter,    // '3'
    PasswordNeedsAtLeastOneUppercaseLetter, // '4'
    PasswordsDoNotMatch,    // '5'
};

std::string getErrorMessage(const ErrorCode error);

bool doPasswordsMatch(const std::string& pass1, const std::string& pass2);

ErrorCode checkPasswordRules(const std::string& pass);

ErrorCode checkPassword(const std::string& pass1, const std::string& pass2);

