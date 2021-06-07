#include <string>

#pragma once

/*-----------------------------------------------*/
enum ErrorCode 
{
    Ok = 0,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string errorMessage[] 
{
    "Ok",
    "PasswordNeedsAtLeastNineCharacters",
    "PasswordNeedsAtLeastOneNumber",
    "PasswordNeedsAtLeastOneSpecialCharacter",
    "PasswordNeedsAtLeastOneUppercaseLetter",
    "PasswordsDoNotMatch"
};

/*-----------------------------------------------*/

std::string getErrorMessage(enum ErrorCode errorIn);
bool doPasswordsMatch(std::string passwd1, std::string passwd2);
ErrorCode checkPasswordRules(std::string passwdIn);
ErrorCode checkPassword(std::string passwd1, std::string passwd2);