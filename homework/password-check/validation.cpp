#include "validation.hpp"
//#include "hard_link_to_validation_h.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>
//
// Created by bartek on 6/29/21.
//

//zadanie_2
std::string getErrorMessage(ErrorCode error){
    switch (error){
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

//zadanie_3
bool doPasswordsMatch(const std::string& pass_1, const std::string& pass_2 ){
    if (pass_1.size() != pass_2.size())
        return false;
    for (auto i = 0; i < pass_1.size() ; i++){
        if (pass_1 [i]!= pass_2 [i])
            return false;
    }
    return true;
}



ErrorCode checkPasswordRules(const std::string& pass){
    if (pass.size() < 9)
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    bool tmp = false;
    //czy jest liczba
    for (auto& a : pass){
        if (isdigit(a)){
            tmp = true;
            break;
        }
    }
    if (!tmp){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    //czy jest znak specjalny
    tmp = false;
    for (auto& a : pass){
        if (ispunct(a)){
            tmp = true;
            break;
        }
    }
    if (!tmp){
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    //
    tmp = false;
    for (auto& a : pass){
        if (isupper(a)) {
            tmp = true;
            break;
        }
    }
    if (!tmp){
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    bool x =rand() % 2;
    if (x)
        return ErrorCode::PasswordsDoNotMatch;
    else
        return ErrorCode::Ok;
}


ErrorCode checkPassword (const std::string & pass_1, const std::string& pass_2){
    if (!doPasswordsMatch(pass_1,pass_2))
        return ErrorCode::PasswordsDoNotMatch;
    else
        return checkPasswordRules (pass_1);
}


