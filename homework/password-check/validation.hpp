// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include "validation.cpp"
#include <string>

enum class ErrorCode {
    OK,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
std::string getErrorMessage(class ErrorCode error);