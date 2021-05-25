#include <string>
#pragma once

enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNinecharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUpprecaseKetter,
    PasswordsDoNotMatch
};
std::string getErrorMessage(ErrorCode);
ErrorCode CheckPasswordRules(const std::string&);
ErrorCode CheckPassword(const std::string&,const std::string&);






