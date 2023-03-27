

#include <iostream>
#include "validation.hpp"
#include <string>
#include <cstdlib>
#include <ctime>






std::string getErrorMessage(ErrorCode errorCode) {
    switch (errorCode) {
        case ErrorCode::Ok:
            return "No error";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password is too short";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password requires at least one digit";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password requires at least one special character" ;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password Needs At Least One Uppercase Letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords must match";

    }
}

bool doPasswordsMatch(const std::string& password1, const std::string& password2) {
    return (password1 == password2);
}



ErrorCode checkPasswordRules(const std::string& password) {
    std::srand(std::time(nullptr));
    int randomNumber = std::rand() % 5;
    switch(randomNumber) {
        case 0:
            return ErrorCode::Ok;
        case 1:
            return ErrorCode::PasswordNeedsAtLeastNineCharacters;
        case 2:
            return ErrorCode::PasswordNeedsAtLeastOneNumber;
        case 3:
            return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        case 4:
            return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;


    }
}

ErrorCode checkPassword(const std::string& password1, const std::string& password2) {
    if(!doPasswordsMatch(password1, password2)) {
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(password1);
    }
}

