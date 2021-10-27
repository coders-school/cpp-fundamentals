#include "validation.hpp"
#include <ctime> 
#include <cstdlib>
#include <string>
#include <iostream>

int checkPassword(std::string first, std::string second)
{
    if(doPasswordMatch)
        return checkPasswordRules(std::string pass);
    else
        ErrorCode(5);
}

std::string getErrorMessage(int code)
{
    switch (code)
    {
    case 0:
        std::cout<<"Ok";
        break;
    case 1:
        std::cout<<"Password needs at least nine characters";
        break;
    case 2:
        std::cout<<"Password needs at least one number";
        break;
    case 3:
        std::cout<<"Password needs at least one special character";
        break;
    case 4:
        std::cout<<"Password needs at least one uppercase letter";
        break;
    case 5:
        std::cout<<"Passwords do not match";
        break;
    default:

        break;
    }
}

int checkPasswordRules(std::string pass)
{
    srand(time(NULL));
    return rand()%5;
}

int checkPassword(std::string first, std::string second)
{
    if(doPasswordMatch)
        return checkPasswordRules(first);
    else 
        return 5;
}

bool doPasswordMatch(std::string first, std::string second)
{
    if(first==second)
        return true;
    return false;
}

// TODO: Put implementations here