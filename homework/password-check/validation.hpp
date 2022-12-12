#pragma once
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
    PasswordsDoNotMatch,

};
std::string getErrorMessage(ErrorCode err);
bool doPasswordsMatch(const std::string& pas1, const std::string& pas2);
ErrorCode checkPasswordRules(const std::string& pas);
ErrorCode checkPassword(std::string str1, std::string str2);