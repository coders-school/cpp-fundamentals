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
    if (passwdIn.length() < 9)
    {
        return PasswordNeedsAtLeastNineCharacters;
    }

    if (std::none_of(passwdIn.begin(), passwdIn.end(), 
        [](char c){ return std::isdigit(static_cast<unsigned char>(c)) != 0; }))
    {
        return PasswordNeedsAtLeastOneNumber;
    }

    if (std::all_of(passwdIn.begin(), passwdIn.end(), 
        [](char c){ return std::isalnum(static_cast<unsigned char>(c)) != 0; }))
    {
        return PasswordNeedsAtLeastOneSpecialCharacter;
    }

    if (std::none_of(passwdIn.begin(), passwdIn.end(), 
        [](char c){ return std::isupper(static_cast<unsigned char>(c)) != 0; }))
    {
        return PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return Ok;
}

ErrorCode checkPassword(std::string passwd1, std::string passwd2)
{
    if (doPasswordsMatch(passwd1, passwd2))
    {
        return checkPasswordRules(passwd1);
    }

    return PasswordsDoNotMatch;
}