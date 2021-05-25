#include "validation.hpp"
std::string getErrorMessage(ErrorCode error)
{
    switch (ErrorCode error)
    {
    case ErrorCode::Ok:
    return "ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNinecharacters:
    return "PasswordNeedsAtLeastNinecharacters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
    return " PasswordNeedsAtLeastOneNumber";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
    return "PasswordNeedsAtLeastOneSpecialCharacter";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUpprecaseKetter:
    return "PasswordNeedsAtLeastOneUpprecaseKetter";
        break;
    default:
    return "PasswordsDoNotMatch";
    }
}

bool doPasswordsMatch(const std::string& first, const std::string& second)
{
    return first == second;
}
