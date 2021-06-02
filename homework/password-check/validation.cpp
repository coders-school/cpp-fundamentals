#include "validation.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
#include <algorithm>

std::string getErrorMessage(ErrorCode ErrorCode) {
    int Ecode = static_cast<int>(ErrorCode);

    switch (Ecode) {
    case 0: {
        return "Ok";
        break;
    }
    case 1: {
        return "Password needs to have at least nine characters";
        break;
    }
    case 2: {
        return "Password needs to have at least one number";
        break;
    }
    case 3: {
        return "Password needs to have at least one special character";
        break;
    }
    case 4: {
        return "Password needs to have at least one uppercase letter";
        break;
    }
    case 5: {
        return "Passwords do not match";
        break;
    }
    }
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword) {
    if (password == repeatedPassword) {
        return true;
    }
    else {
        return false;
    }
}

// previous solution
//ErrorCode checkPasswordRules(std::string password) {
//    int Ecode = std::rand() % 4;
//    switch (Ecode)
//    {
//    case 0: {
//        return ErrorCode::Ok;
//        break;
//    }
//    case 1: {
//        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
//        break;
//    }
//    case 2: {
//        return ErrorCode::PasswordNeedsAtLeastOneNumber;
//        break;
//    }
//    case 3: {
//        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
//        break;
//    }
//    case 4: {
//        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
//        break;
//    }
//    }
//}

ErrorCode checkPasswordRules(std::string password) {
    //int Ecode = std::rand() % 4;
  
    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (std::none_of(password.begin(), password.end(), isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::none_of(password.begin(), password.end(), ispunct)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (std::none_of(password.begin(), password.end(), isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        return ErrorCode::Ok;
    }   
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword) {
    bool condition = doPasswordsMatch(password, repeatedPassword);
    if (condition == false) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    else {
        return checkPasswordRules(password);
    }
}
