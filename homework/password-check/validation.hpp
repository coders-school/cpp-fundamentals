#pragma once
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
 };

std::string getErrorMessage(ErrorCode);
ErrorCode checkPassword(std::string, std::string);

bool doPasswordsMatch(std::string firstPass, std::string secondPass);
ErrorCode checkPasswordRules(std::string);
