#include "validation.hpp"
// TODO: Put implementations here
//#include <iostream>
//#include <string>
#include <ctime>
#include <algorithm>
// #include <cstdlib>

std::string getErrorMessage(ErrorCode error) {
    if (error == ErrorCode::Ok) {
        return "Ok";
    } else if (error == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return "Password needs to have at least nine characters";        
    } else if (error == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return "Password needs to have at least one number";
    } else if (error == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return "Password needs to have at least one special character";
    } else if (error == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return "Password needs to have at least one uppercase letter";
    } else { //(error == ErrorCode::PasswordsDoNotMatch) {
        return "Passwords do not match";
    } 
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword) {
    return password == repeatedPassword ? true : false;
}

ErrorCode checkPasswordRules(std::string password) {
    bool flag = true;

    if(password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    auto check_number = [] (auto c) { return isdigit(c); }; 
    flag = any_of(password.begin(), password.end(), check_number);

    if(!flag) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    auto check_special = [] (auto c) { return ispunct(c); };
    flag = any_of(password.begin(), password.end(), check_special);

    if(!flag) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    auto check_upper = [] (auto c) { return isupper(c); };
    flag = any_of(password.begin(), password.end(), check_upper);

    if(!flag) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword) {
    if (doPasswordsMatch(password, repeatedPassword)) {
        return ErrorCode::Ok;
    } else if (!doPasswordsMatch(password, repeatedPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(password);
    }
}