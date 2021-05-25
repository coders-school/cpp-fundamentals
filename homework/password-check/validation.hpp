#include <string>
#pragma once

enum class ErrorCode
{
    Ok;
    PasswordNeedsAtLeastNinecharacters;
    PasswordNeedsAtLeastOneNumber;
    PasswordNeedsAtLeastOneSpecialCharacter;
    PasswordNeedsAtLeastOneUpprecaseKetter;
    PasswordsDoNotMatch;
}
std::string getErrorMessage(int);
std::string PasswordNeedsAtLeastOneNumber(std::string);
std::string PasswordNeedsAtLeastOneNumber(std::string,std::string);






