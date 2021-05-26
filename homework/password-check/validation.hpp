#include <string>
#pragma once

enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
std::string getErrorMessage(ErrorCode);
bool doPasswordsMatch(const std::string&, const std::string&);
ErrorCode checkPasswordRules(const std::string&);
ErrorCode CheckPassword(const std::string&,const std::string&);






