#pragma once
#include <iostream>

enum class ErrorCode
{
Ok,
PasswordNeedsAtLeastNineCharacters,
PasswordNeedsAtLeastOneNumber,
PasswordNeedsAtLeastOneSpecialCharacter,
PasswordNeedsAtLeastOneUppercaseLetter,
PasswordsDoNotMatch,
Undefinied = -1
};

std::string getErrorMessage(ErrorCode);
bool doPasswordsMatch(std::string, std::string);
ErrorCode checkPasswordRules(std::string);
ErrorCode checkPassword(std::string, std::string);