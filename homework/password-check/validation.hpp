#pragma once
#include <algorithm>
#include <cctype>
#include <iostream>
#include <random>
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

bool doPasswordsMatch(std::string password, std::string repeatedPassword);
bool okPassword(std::string password);
bool nineCharacter(std::string password);
bool oneNumber(std::string password);
bool specialCharacter(std::string password);
bool uppercaseLetter(std::string password);
std::string getErrorMessage(ErrorCode result);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password, std::string repeatedPassword);

