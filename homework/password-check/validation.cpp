#include "validation.hpp"
#include <string>


int checkPassword(std::string first, std::string second)
{
    if(doPasswordsMatch(first,second))
        return checkPasswordRules(first);
    else
        return ErrorCode::PasswordsDoNotMatch;
}

std::string getErrorMessage(int code)
{
    switch (code)
    {
    case 0:
        return "Ok";
        break;
    case 1:
        return "Password needs to have at least nine characters";
        break;
    case 2:
        return "Password needs to have at least one number";
        break;
    case 3:
        return "Password needs to have at least one special character";
        break;
    case 4:
        return "Password needs to have at least one uppercase letter";
        break;
    case 5:
        return "Passwords do not match";
        break;
    default:

        break;
    }
}

int checkPasswordRules(std::string pass)
{
    return 4;
}

bool doPasswordsMatch(std::string first, std::string second)
{
    if(first==second)
        return true;
    return false;
}

// TODO: Put implementations here