#include <string>

// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
enum ErrorCode {Ok,
                PasswordNeedsAtLeastNineCharacters,
                PasswordNeedsAtLeastOneNumber,
                PasswordNeedsAtLeastOneSpecialCharacter,
                PasswordNeedsAtLeastOneUppercaseLetter,
                PasswordsDoNotMatch
                };

std::string getErrorMessage(ErrorCode errCode);
bool doPasswordsMatch(std::string password1, std::string password2);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password1, std::string password2);