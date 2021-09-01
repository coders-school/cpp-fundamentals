#include "validation.hpp"
// TODO: Put implementations here
std::string getErrorMessage(ErrorCode err) {
    switch (err) {
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

    default:
        return "Unknow error\n";       
    }
}

bool doPasswordsMatch(const std::string& pwd1, const std::string& pwd2) {
    if (pwd1.compare(pwd2) == 0) {
        return true;
    }
    return false;
}
ErrorCode checkPasswordRules(const std::string& pwd ) {
    auto resultRules = ErrorCode::Ok;
    const std::string patternOfLetters = "AĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUWYZŹŻ";
    if(pwd.length() < 9) {
        resultRules = ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    bool IsUppercaseLetter = true;
    bool IsDigit = false;
    bool isSpecialChar = false;
    size_t it_pwd = -1;
    for(size_t i = 0; i < pwd.length()-1; ++i) {

        if(!(isdigit(pwd[i])) ) {
            
        } 
        if ( !(ispunct(pwd[i])) ) {
            resultRules = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        }
        if(!pwd.empty()) {
            
            while ((it_pwd = pwd.find_first_of(patternOfLetters, it_pwd+1)) != std::string::npos)
            {
                resultRules = ErrorCode::Ok;
                break;
                //IsUppercaseLetter = false;
            }            
        }
         if(it_pwd < 1) {

           resultRules = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
         }
 
        // if(static_cast<int>(pwd[i]) > 64 && static_cast<int>(pwd[i])< 91) {
        //     IsUppercaseLetter = true;
        //     break;
        // }
    }  
    return resultRules;
}

ErrorCode checkPassword(const std::string& pwd1, const std::string& pwd2) {
    auto isEqual = doPasswordsMatch(pwd1, pwd2);
    if (isEqual == false) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    auto resultRules = checkPasswordRules(pwd1);

    return resultRules;
}
