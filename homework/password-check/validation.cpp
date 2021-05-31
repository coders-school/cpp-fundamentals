#include "validation.hpp"
#include<cctype>
#include<algorithm>

// TODO: Put implementations here


std::string getErrorMessage(const ErrorCode error){
    switch(error){
        case ErrorCode::Ok :
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters :
            return "Password Needs At Least Nine Characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber :
            return "Password Needs At Least One Number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter :
            return "Password Needs At Least One Special Character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter :
            return "Password Needs At Least One Uppercase Letter";
        case ErrorCode::PasswordsDoNotMatch :
            return "Passwords Do Not Match";
        default :
            return "Unknown Error !!!";
    }
}

bool doPasswordsMatch(const std::string& pass1, const std::string& pass2){
    if(pass1 == pass2)
        return true;
    else
        return false;
}

ErrorCode checkPasswordRules(const std::string& pass){
    if(pass.size() < 9)
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    else if(std::none_of(pass.cbegin(), pass.cend(), 
                [](unsigned char c){ return std::isdigit(c); }))
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    else if(std::all_of(pass.cbegin(), pass.cend(), 
                [](unsigned char c){ return std::isalnum(c); }))
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    else if(std::none_of(pass.cbegin(), pass.cend(), 
                [](unsigned char c){ return std::isupper(c);}))
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    else
        return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& pass1, const std::string& pass2){
    bool result = doPasswordsMatch(pass1, pass2);
    if(!result)
        return ErrorCode::PasswordsDoNotMatch;
    else
        return checkPasswordRules(pass1);
}


