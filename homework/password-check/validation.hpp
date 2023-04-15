// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <iostream>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
std::string getErrorMessage(const ErrorCode& code);

bool doPasswordsMatch(const std::string& inDataBase, const std::string& given);
ErrorCode checkPassword(const std::string& inDataBase, const std::string& given);
ErrorCode checkPasswordRules(const std::string& given);