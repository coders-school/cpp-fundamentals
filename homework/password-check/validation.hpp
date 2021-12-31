#pragma once
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <cctype>

enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};

bool doPasswordsMatch(const std::string &setPassword, const std::string &repeatedPassword)
{
    return setPassword == repeatedPassword;
}

// const ErrorCode checkPasswordRules(std::string password) {
//     int random_error;
//     srand (time(NULL));
//     random_error = rand() % 5 + 1;
//     return static_cast<ErrorCode>(random_error);
// }

ErrorCode checkPasswordRules(const std::string &password)
{
    if (password.size() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    else if (std::count_if(password.cbegin(), password.cend(), [](unsigned char c)
                           { return std::isdigit(c); }) < 1)
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    else if (std::count_if(password.cbegin(), password.cend(), [](unsigned char c)
                           { return std::ispunct(c); }) < 1)
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    else if (std::count_if(password.cbegin(), password.cend(), [](unsigned char c)
                           { return std::isupper(c); }) < 1)
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    else
    {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(const std::string &setPassword, const std::string &repeatedPassword)
{
    return doPasswordsMatch(setPassword, repeatedPassword) ? checkPasswordRules(setPassword) : ErrorCode::PasswordsDoNotMatch;
}

std::string getErrorMessage(ErrorCode errorCode)
{
    switch (errorCode)
    {
    case ErrorCode::Ok:
        return "Ok";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
    default:
        return "Unknown error";
    }
}
