// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch

};

std::string getErrorMessage(ErrorCode codeErr);
bool doPasswordsMatch(std::string password, std::string givenPassword);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password, std::string givenPassword);
