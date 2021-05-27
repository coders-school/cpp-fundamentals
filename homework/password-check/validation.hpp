#pragma once 
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <cctype>
#include <vector>

enum class ErrorCode { 
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode error);

bool doPasswordsMatch(std::string str1, std::string str2);

ErrorCode checkPasswordRules(std::string str);
 
ErrorCode checkPassword(std::string str1, std::string str2);
