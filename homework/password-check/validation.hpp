#include <string>
#pragma once

enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNinecharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUpprecaseKetter,
    PasswordsDoNotMatch;
}
std::string getErrorMessage(ErrorCode);
std::string CheckPasswordRules(std::string);
std::string CheckPassword(std::string,std::string);






