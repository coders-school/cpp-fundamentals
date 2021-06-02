// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#include <string>
enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
std::string getErrorMessage(ErrorCode text);
bool doPasswordsMatch(std::string password, std::string repeatedPassword);
ErrorCode pasword1(std::string password);
std::string getErrorMessage(ErrorCode text);
ErrorCode checkPassword(std::string password, std::string repeatedPassword);
ErrorCode checkPasswordRules(std::string password);
