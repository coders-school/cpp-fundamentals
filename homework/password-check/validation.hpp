#pragma once

#include <string>

// errorcode enum for password validation
enum class ErrorCode : short
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

// returns textual representation assigned to error code
std::string getErrorMessage(ErrorCode errCode);

// checks if two passwords are identical
bool doPasswordsMatch(const std::string& first, const std::string& second);

// checks if the password meets defined set of rules
ErrorCode checkPasswordRules(const std::string& password);

// checks if two passwords are identical and follow defined set of rules
ErrorCode checkPassword(const std::string& passwd_one,
                        const std::string& passwd_two);