#include "validation.hpp"
#include  <algorithm>
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

bool doPasswordsMatch(const std::string& pass1, const std::string pass2)
{
    if(pass1.compare(pass2) == 0)
    {
        return true;
    }
    return false;
}

enum ErrorCode checkPasswordRules(const std::string& pass)
{
    auto  count_uppers = [](const std::string& s)
                            {
                                return std::count_if(s.begin(), s.end(), 
                                                    [](unsigned char c){ return std::isupper(c); } // correct
                                                    );
                            };
    if(count_uppers(pass) == 0)
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
}

enum ErrorCode checkPassword(const std::string& pass1, const std::string pass2)
{
    if(not doPasswordsMatch(pass1, pass2))
    {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return ErrorCode::Ok;
}

/*
TEST(checkPasswordTests, returnsPasswordsDoNotMatchForDifferentPasswords) {
    EXPECT_EQ(checkPassword(PROPER_PASSWORD, EMPTY_PASSWORD), ErrorCode::PasswordsDoNotMatch);  // equal ==
    EXPECT_EQ(checkPassword(EMPTY_PASSWORD, PROPER_PASSWORD), ErrorCode::PasswordsDoNotMatch);
    EXPECT_EQ(checkPassword(TOO_SHORT_PASSWORD, PROPER_PASSWORD), ErrorCode::PasswordsDoNotMatch);
}
*/


