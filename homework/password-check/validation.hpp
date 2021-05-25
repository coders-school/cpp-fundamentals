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
bool doPasswordsMatch(const std::string&, const std::string&);
std::string CheckPasswordRules(std::string);
std::string CheckPassword(std::string,std::string);






