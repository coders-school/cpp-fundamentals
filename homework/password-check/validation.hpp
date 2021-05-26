#ifndef VALIDATION_HPP
#define VALIDATION_HPP
#include <cstdbool>
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

std::string getErrorMessage(ErrorCode);
bool doPasswordsMatch(std::string, std::string);
ErrorCode doPasswordsMatch(std::string);
ErrorCode checkPasswordRules(std::string);
ErrorCode checkPassword(std::string, std::string);
#endif /*VALIDATION_HPP*/
