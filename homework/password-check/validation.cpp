#include "validation.hpp"


std::string getErrorMessage(ErrorCode ErrCode) {
    switch (ErrCode) {
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
}
bool doPasswordsMatch(std::string pass1, std::string pass2){
    if(pass1.compare(pass2) == 0)
    {
        return true;
    }else{
        return false;
    }
}

ErrorCode checkPasswordRules(std::string pass){
    srand(time(0));
    int r = (rand() % 2);
    if(!r)
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }else{
        return ErrorCode::Ok;
    }
   
}

ErrorCode checkPassword(std::string pass1, std::string pass2){

    if(doPasswordsMatch(pass1, pass2))
    {
        return checkPasswordRules(pass1);
    }else{
        return ErrorCode::PasswordsDoNotMatch;
    }
}
// TODO: Put implementations here