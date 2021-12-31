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


const bool doPasswordsMatch(std::string setPassword, std::string repeatedPassword) {
    if (setPassword == repeatedPassword) {
        return true;
    } else {
        return false;
    }
}

// const ErrorCode checkPasswordRules(std::string password) {
//     int random_error;
//     srand (time(NULL));
//     random_error = rand() % 5 + 1;
//     return static_cast<ErrorCode>(random_error);
// }

const ErrorCode checkPasswordRules(std::string password) {
    if (password.size()<9){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (std::count_if(password.cbegin(), password.cend(), [](unsigned char c){ return std::isdigit(c); })<1){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::count_if(password.cbegin(), password.cend(), [](unsigned char c){ return std::ispunct(c); })<1){
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (std::count_if(password.cbegin(), password.cend(), [](unsigned char c){ return std::isupper(c); })<1){
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        return ErrorCode::Ok;
    }
}

const ErrorCode checkPassword(std::string setPassword, std::string repeatedPassword) {
    bool password_match = doPasswordsMatch(setPassword, repeatedPassword);
    if (password_match) {
        return checkPasswordRules(setPassword);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}

const std::string getErrorMessage(enum ErrorCode errorCode)
{
    std::string result;
    switch (errorCode)
    {
    case ErrorCode::Ok:
    {
        return result = "Ok";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
    {
        return result = "Password needs to have at least nine characters";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
    {
        return result = "Password needs to have at least one number";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
    {
        return result = "Password needs to have at least one special character";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
    {
        return result = "Password needs to have at least one uppercase letter";
        break;
    }
    case ErrorCode::PasswordsDoNotMatch:
    {
        return result = "Passwords do not match";
        break;
    }
    }
    return 0;
}
