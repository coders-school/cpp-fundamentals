#include "validation.hpp"
#include <string>
#include <algorithm>
#include <cctype>

std::string getErrorMessage(ErrorCode err)
{
    std::string str{};
    switch (err) {
    case ErrorCode::Ok:
        str = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        str = "Password needs to have at least nine characters";
        break;

    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        str = "Password needs to have at least one number";
        break;

    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        str = "Password needs to have at least one special character";
        break;

    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        str = "Password needs to have at least one uppercase letter";
        break;

    case ErrorCode::PasswordsDoNotMatch:
        str = "Passwords do not match";
        break;
    }
    return str;
}

bool doPasswordsMatch(std::string first, std::string second)
{
    return (first == second) ? 1 : 0;
}

/*
bool rev_isalnum(char c)
{
    return (!std::isalnum(c));
}
*/

ErrorCode checkPasswordRules(std::string pass)
{
    ErrorCode err {};
    if (pass.length() < 9)
        err = ErrorCode::PasswordNeedsAtLeastNineCharacters;

    //if any of them returns true - then false
    bool answer = std::none_of(pass.begin(), pass.end(), isdigit);
    if (answer)
        err = ErrorCode::PasswordNeedsAtLeastOneNumber;

    //if any of them returns true - then true
    answer = std::any_of(pass.begin(), pass.end(), [](char c){return !std::isalnum(c);});
    if (!answer)
        err = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;

    answer = std::any_of(pass.begin(), pass.end(), isupper);
    if (!answer)
        err = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

    return err;
}

ErrorCode checkPassword(std::string first, std::string second)
{
    if (0 == doPasswordsMatch(first, second))
        return ErrorCode::PasswordsDoNotMatch;
    else
        return checkPasswordRules(first);
}
