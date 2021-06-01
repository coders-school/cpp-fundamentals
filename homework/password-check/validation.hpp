#include <iostream> 
#include <string> 
#pragma once

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

bool doPasswordsMatch(const std::string& ,const std::string& );

ErrorCode checkPasswordRules(const std::string& );

ErrorCode checkPassword(const std::string& ,const std::string& );

std::string getErrorMessage(ErrorCode);

ErrorCode checkPassword(const std::string& ,const std::string& );

// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once