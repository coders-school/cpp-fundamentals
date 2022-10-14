// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once#pragma once i
#pragma once
#include <string>

enum class ErrorCode {  // Class declaration
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

// Functions protptypes

std::string getErrorMessage(ErrorCode error);  // header only

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword);

ErrorCode checkPasswordRules(const std::string& password);

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword);
