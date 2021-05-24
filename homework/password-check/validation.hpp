#pragma once
#include <string>

// Possible error codes in password validation process
enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(const ErrorCode t_ErrorCode);
bool doPasswordsMatch(const std::string& t_FirstPass, const std::string& t_SecondPass);
ErrorCode checkPasswordRules(const std::string& t_Pass);
ErrorCode checkPassword(const std::string& t_FirstPass, const std::string& t_SecondPass);