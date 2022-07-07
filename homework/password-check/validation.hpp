#pragma once
#include <iostream>
#include <string>

enum class ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(int error);
bool doPasswordsMatch(std::string passOne, std::string passTwo);
int checkPasswordRules(std::string checkPass);
int checkPassword(std::string passwordOne, std::string passwordTwo);
