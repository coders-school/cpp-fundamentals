//
// Created by bartek on 6/29/21.
//
#include <iostream>

enum class ErrorCode {
    Ok = 1,
    PasswordNeedsAtLeastNineCharacters = 11,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter ,
    PasswordNeedsAtLeastOneUppercaseLetter ,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode);

bool doPasswordsMatch(const std::string&,const std::string&);

ErrorCode checkPasswordRules(const std::string&);

ErrorCode checkPassword (const std::string &, const std::string&);


