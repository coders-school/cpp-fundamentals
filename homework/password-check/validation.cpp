#include "validation.hpp"
// TODO: Put implementations here

int checkPassword(const std::string &password, const std::string &)
{
    
    return 1;
}

bool doPasswordsMatch(const std::string &, const std::string &)
{

    return true;
}

int checkPasswordRules(const std::string &)
{
    return 1;
}

std::string getErrorMessage(int errorCode)
{
    switch (errorCode)
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
    default:
        break;
    }
}