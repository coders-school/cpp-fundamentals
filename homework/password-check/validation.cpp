#include "validation.hpp"
#include <random>

// TODO: Put implementations here
//


std::string getErrorMessage(enum ErrorCode code) {

    switch (code)   {
        case Ok:
            return "Ok";
            break;
        case PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
            break;
        case PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
            break;
        case PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character"; 
            break;
        case PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
            break;
        case PasswordsDoNotMatch:
            return "Passwords do not match"; 
            break;
    }
return "dupa";
}

bool doPasswordsMatch(std::string pass1, std::string pass2)  {

    if (pass1==pass2) return true;
    
    return false;
}

enum ErrorCode checkPasswordRules(std::string pass)    {
    int errorNo = std::rand()%5;
    ErrorCode rndError = (ErrorCode)errorNo;

return rndError;
}

enum ErrorCode checkPassword(std::string pass1, std::string pass2)   {
    if(doPasswordsMatch(pass1,pass2)) return checkPasswordRules(pass1);
    return PasswordsDoNotMatch;
}

