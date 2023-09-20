#include "validation.hpp"


ErrorCode errorCode;

std::string getErrorMessage(ErrorCode result)
{
    switch(result) {
        case ErrorCode::Ok:
            return "Ok";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
            break;
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
            break;
    }
    return "";
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword)
{
    return password == repeatedPassword ? true : false;
}

ErrorCode checkPasswordRules(std::string password)
{
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0,4);
    int error = distribution(generator);
    ErrorCode randomError = static_cast<ErrorCode>(error);
    return randomError;
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword)
{
    bool compare = doPasswordsMatch(password, repeatedPassword);
    if(compare != true) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    else {
        return checkPasswordRules(password);
    }
}
