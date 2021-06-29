#include "validation.hpp"
//
// Created by bartek on 6/29/21.
//

std::string getErrorMessage(ErrorCode error){
    switch (error){
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs at least nine characters.";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs at least one number.";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs at least one special character.";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs at least one upper case letter.";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match.";
    }
}


bool doPasswordsMatch(const std::string&, const std::string&){



}

ErrorCode checkPasswordRules(const std::string&){

}


ErrorCode checkPassword (const std::string &, const std::string&){


}


