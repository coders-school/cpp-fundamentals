#pragma once
// #include <ctype.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
enum class ErrorCode;

std::string getErrorMessage(ErrorCode ErrCode);

bool doPasswordsMatch(std::string pass1, std::string pass2);

ErrorCode checkPasswordRules(std::string pass);

ErrorCode checkPassword(std::string pass1, std::string pass2);