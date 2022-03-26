// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include<iostream>

enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(const ErrorCode& code);
bool doPasswordsMatch(const std::string& pas1, const std::string& pas2);
ErrorCode checkPasswordRules(const std::string& pas);
ErrorCode checkPassword(const std::string& pas1, const std::string& pas2);

bool isThereNumberInString(const std::string& str);
bool isThereSpecialCharacterInString(const std::string& str);
bool isThereUppercaseInString(const std::string& str);