#pragma once
#include <string>

// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

enum ErrorCode {
   Ok,
   PasswordNeedsAtLeastNineCharacters,
   PasswordNeedsAtLeastOneNumber,
   PasswordNeedsAtLeastOneSpecialCharacter,
   PasswordNeedsAtLeastOneUppercaseLetter,
   PasswordsDoNotMatch,
};

bool doPasswordsMatch(const std::string&, const std::string&);
int checkPasswordRules(const std::string&);
int checkPassword(const std::string&, const std::string&);
std::string getErrorMessage(int);