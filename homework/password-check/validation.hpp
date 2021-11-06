// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <string>
#include <random>

enum ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode errorCode);    // returns a communicate based on the given error code

bool doPasswordsMatch(std::string password_first, std::string password_second); //returns boolean whether two provided password were identical

ErrorCode checkPasswordRules(std::string password); //returns a random error code. Takes one password (string)

ErrorCode checkPassword(std::string password_first, std::string password_second); //returns an error code. Takes two passwords.
