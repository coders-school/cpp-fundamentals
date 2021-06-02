#pragma once
#include <iostream>
#include <string>
#include <map>

enum class ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode error);
bool doPasswordsMatch(std::string password, std::string repeatedPassword);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password, std::string repeatedPassword);