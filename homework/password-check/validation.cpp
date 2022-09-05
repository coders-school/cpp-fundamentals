#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(enum ErrorCode error)
{
    std::string error_message;
    switch(error)
    {
        case ErrorCode::Ok:
            error_message = "Ok";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            error_message = "Password needs to have at least nine characters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            error_message = "Password needs to have at least one number";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            error_message = "Password needs to have at least one special character";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            error_message = "Password needs to have at least one uppercase letter";
            break;
        case ErrorCode::PasswordsDoNotMatch:
            error_message = "Passwords do not match";
            break;
        default:
            error_message = "xxx"; //TODO: worth to handle
            break;
    }
    return error_message;
}

/*
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastNineCharacters), "Password needs to have at least nine characters");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneNumber), "Password needs to have at least one number");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter), "Password needs to have at least one special character");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter), "Password needs to have at least one uppercase letter");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordsDoNotMatch), "Passwords do not match");
*/

bool doPasswordsMatch(const std::string& pass1, const std::string pass2)
{
    return false;
}

enum ErrorCode checkPasswordRules(const std::string& pass)
{
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
}

enum ErrorCode checkPassword(const std::string& pass1, const std::string pass2)
{
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
}