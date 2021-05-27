#pragma once
#include <string>
#include <ctime>
#include <cstdlib>
// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
enum class ErrorCode;

std::string getErrorMessage(ErrorCode ErrCode);

bool doPasswordsMatch(std::string pass1, std::string pass2);

ErrorCode checkPasswordRules(std::string pass);

ErrorCode checkPassword(std::string pass1, std::string pass2);