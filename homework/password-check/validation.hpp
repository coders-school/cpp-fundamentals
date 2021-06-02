#pragma once
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

std::string getErrorMessage(ErrorCode err);
bool doPasswordsMatch(std::string pass1, std::string pass2);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string pass1, std::string pass2);
