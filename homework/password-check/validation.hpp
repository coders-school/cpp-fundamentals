// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

#pragma once


enum class ErrorCode {
    Ok, // '0'
    PasswordNeedsAtLeastNineCharacters, // '1'
    PasswordNeedsAtLeastOneNumber,  // '2'
    PasswordNeedsAtLeastOneSpecialCharacter,    // '3'
    PasswordNeedsAtLeastOneUppercaseLetter, // '4'
    PasswordsDoNotMatch,    // '5'
};

getErrorMessage(int error);

bool doPasswordsMatch(std::string pass1, std::string pass2);

int checkPasswordRules(std::string pass);

int checkPassword(std::string pass1, std::string pass2);
