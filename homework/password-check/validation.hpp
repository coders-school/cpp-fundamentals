#pragma once
#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage (ErrorCode);

bool doPasswordsMatch (const std::string&, const std::string&);

ErrorCode checkPasswordRules (const std::string&);

ErrorCode checkPassword (const std::string&, const std::string&);

// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once