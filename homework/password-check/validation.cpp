#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode error){
    switch(error){
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
    }
}

bool doPasswordsMatch(const std::string& p1, const std::string& p2){
    return p1 == p2 ? true : false;
}

ErrorCode checkPasswordRules(const std::string& p){
    
    if (p.size() < MIN_CHARACTERS) return ErrorCode::PasswordNeedsAtLeastNineCharacters;

    auto hasNoNumber = std::all_of(p.begin(),p.end(),[](unsigned char c)->bool{return std::isalpha(c);});
    if (hasNoNumber){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } 
    
    auto hasNoSpecial = std::all_of(p.begin(),p.end(),[](unsigned char c)->bool{return std::isalnum(c);});
    if (hasNoSpecial){
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } 

    auto hasNoUpper = std::any_of(p.begin(),p.end(),[](unsigned char c)->bool{return std::isupper(c);});
        if (!hasNoUpper){
    return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } 

    return ErrorCode::Ok;
  
    /*
    std::srand(time(NULL));
    auto randomAnswer = rand() % 5;
    switch(randomAnswer){
        case 0 : return ErrorCode::Ok;
        case 1 : return ErrorCode::PasswordNeedsAtLeastNineCharacters;
        case 2 : return ErrorCode::PasswordNeedsAtLeastOneNumber;
        case 3 : return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        case 4 : return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    */
}

ErrorCode checkPassword(const std::string& p1, const std::string& p2){
    return doPasswordsMatch(p1,p2) ? checkPasswordRules(p1) : ErrorCode::PasswordsDoNotMatch ;
}