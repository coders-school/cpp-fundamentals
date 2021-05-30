// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <string>
#include <map>

enum class ErrorCode {
    Ok = 0,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};
static const std::map<ErrorCode, std::string>& convertEnumsToString(); 
std::string getErrorMessage(ErrorCode);
bool doPasswordsMatch(std::string, std::string);
std::string checkPasswordRules(std::string);
std::string checkPassword(std::string, std::string);
