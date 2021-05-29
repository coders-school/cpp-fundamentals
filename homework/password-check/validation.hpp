#pragma once
#include <string>
#include <random>
#include <ctime>
#include <iostream>
#include <vector>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode);
bool doPasswordsMatch(std::string, std::string);
ErrorCode checkPasswordRules(std::string);
ErrorCode checkPassword(std::string, std::string);
