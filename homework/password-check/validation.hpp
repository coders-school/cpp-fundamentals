// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

#pragma once
#include <string>

enum ErrorCode {Ok, PasswordNeedsAtLeastNineCharacters, PasswordNeedsAtLeastOneNumber, PasswordNeedsAtLeastOneSpecialCharacter, PasswordNeedsAtLeastOneUppercaseLetter, PasswordsDoNotMatch};

std::string getErrorMessage(ErrorCode er);

bool doPasswordsMatch(std::string psw1, std::string psw2);

ErrorCode checkPasswordRules(std::string password);

ErrorCode checkPassword(std::string psw1, std::string psw2);