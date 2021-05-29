#include "validation.hpp"

std::string getErrorMessage(ErrorCode errorCode)
{
    switch (errorCode)
    {
        case ErrorCode::Ok: return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters: return "PasswordNeedsAtLeastNineCharacters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber: return "PasswordNeedsAtLeastOneNumber";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: return "PasswordNeedsAtLeastOneSpecialCharacter";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: return "PasswordNeedsAtLeastOneUppercaseLetter";
        case ErrorCode::PasswordsDoNotMatch: return "PasswordsDoNotMatch";     
    }
}

bool doPasswordsMatch(std::string pass1, std::string pass2)
{
    return (pass1 == pass2);
}