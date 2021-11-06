// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <string>
#include <random>
#include <algorithm>

enum ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode errorCode);    // returns a communicate based on the given error code

bool doPasswordsMatch(const std::string password_first, const std::string password_second); //returns boolean whether two provided password were identical

ErrorCode checkPasswordRules(const std::string password); //returns an error code. Takes one password (string)

ErrorCode checkPassword(const std::string password_first, const std::string password_second); //returns an error code. Takes two passwords.
