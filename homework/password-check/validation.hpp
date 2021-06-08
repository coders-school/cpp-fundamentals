// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <string>
enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters, 
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode);

bool doPasswordsMatch(std::string password_one, std::string password_two);

ErrorCode checkPasswordRules(std::string password);

ErrorCode checkPassword(std::string password_one, std::string password_two);

