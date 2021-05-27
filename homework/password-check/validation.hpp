#pragma once 
#include <string>

enum class ErrorCode { 
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(int error_type)

bool doPasswordsMatch(std::string str1, std::string str2);

int checkPasswordRules(std::string);
 
ErrorCode checkPassword(std::string str1, std::string str2);
