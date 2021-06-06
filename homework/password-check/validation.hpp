// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once

enum class ErrorCode
{
    Ok = 1,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

// Gets error type and yield appropiate message 
// to the error
void getErrorMessage(ErrorCode errorType);

// @param password
// Checks whether passwords are the same
bool doPasswordsMatch();

ErrorCode checkPassword();

