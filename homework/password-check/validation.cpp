#include "validation.hpp"
#include <iostream>
#include <random>
#include <algorithm>
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode e)
{
    switch(e)
    {
        case ErrorCode::Ok:
              return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
    }
}
bool doPasswordsMatch(std::string a, std::string b)
{
    if(a == b) return true;
    else return false;
}

ErrorCode checkPasswordRules(std::string pass)
{
    //std::random_device r;
    //std::default_random_engine e1(r());
    //std::uniform_int_distribution<int> uniform_dist(0, 4);
    //int mean = uniform_dist(e1);
    //return static_cast<ErrorCode>(mean);
    ErrorCode e = ErrorCode::Ok;
    if(pass.length() < 9)
        e = ErrorCode::PasswordNeedsAtLeastNineCharacters;
    else if(std::none_of(pass.begin(), pass.end(), [](unsigned char c){return isdigit(c);}))
        e = ErrorCode::PasswordNeedsAtLeastOneNumber;
    else if(std::none_of(pass.begin(), pass.end(), [](unsigned char c){return ispunct(c);}))
        e = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    else if(std::none_of(pass.begin(), pass.end(), [](unsigned char c){return isupper(c);}))
        e = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    return e;
}
ErrorCode checkPassword(std::string a, std::string b)
{
    if(doPasswordsMatch(a, b))
    {
        return checkPasswordRules(a);
    }
    else
    {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
