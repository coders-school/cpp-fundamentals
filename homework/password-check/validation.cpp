#include "validation.hpp"
#include <stdlib.h>
#include <random>
// TODO: Put implementations here

int checkPassword(const std::string &password, const std::string &repeatedPassword)
{
    if (doPasswordsMatch(password, repeatedPassword))
    {
        return checkPasswordRules(password);
    }
    return ErrorCode(5);
}

bool doPasswordsMatch(const std::string &password, const std::string &repeatedPassword)
{
    if (password == repeatedPassword)
    {
        return true;
    }
    return false;
}

int checkPasswordRules(const std::string &)
{
    std::random_device rand_dev;
    std::mt19937 generator(rand_dev());
    std::uniform_int_distribution<int> distr(0, 4);
    return ErrorCode(distr(generator));
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
        break;
    default:
        return "Behaviour out of scope";
        break;
    }
}