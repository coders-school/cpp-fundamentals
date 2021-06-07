#include "validation.hpp"

std::string errorMessage[6] 
{
    "Ok",
    "PasswordNeedsAtLeastNineCharacters",
    "PasswordNeedsAtLeastOneNumber",
    "PasswordNeedsAtLeastOneSpecialCharacter",
    "PasswordNeedsAtLeastOneUppercaseLetter",
    "PasswordsDoNotMatch"
};

std::string getErrorMessage(enum ErrorCode errorIn)
{
    return errorMessage[errorIn];
}

bool doPasswordsMatch(std::string passwd1, std::string passwd2)
{
    return passwd1.compare(passwd2) == 0;
}

ErrorCode checkPasswordRules(std::string passwdIn)
{
    return Ok;
}

ErrorCode checkPassword(std::string passwd1, std::string passwd2)
{
    return Ok;
}