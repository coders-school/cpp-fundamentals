#include "validation.hpp"
// #pragma once
#include <iostream>
#include <string>
#include <cctype>

    
std::string getErrorMessage(int errcode) {
    switch (errcode) {
    case 0:
        return "ErrorCode::Ok";
    case 1:
        return "Password Needs AtLeast Nine Characters";
    case 2:
        return "Password Needs AtLeast OneNumber";
    case 3:
        return "Password Needs AtLeast One Special Character";
    case 4:
        return "Password Needs AtLeast One Uppercase Letter";
    case 5:
        return "Passwords Do Not Match";
    }
}

bool doPasswordsMatch(std::string psw1, std::string psw2) {
    if (psw1 == psw2)
        return true;
    else
        return false;
}

int checkPasswordRules(std::string pass) {
    int i;
    ErrorCode back;
    bool OneNumber, OneUppercaseLetter, OneSpecialCharacter;
    OneNumber = false;
    OneUppercaseLetter = false;
    OneSpecialCharacter = false;
    if (pass.length()<9) 
        return static_cast <int>(back = ErrorCode::PasswordNeedsAtLeastNineCharacters);
    for (auto element : pass) {
        if (isdigit(element))
            OneNumber = true;
        if (!isalnum(element))
            OneSpecialCharacter = true;
        if (isupper(element))
            OneUppercaseLetter = true;
    }
    if (!OneNumber)
        return static_cast<int>(back = ErrorCode::PasswordNeedsAtLeastOneNumber);
    else
        if (!OneUppercaseLetter)
            return static_cast<int>(back = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter);
        else
            if (!OneSpecialCharacter)
                return static_cast <int>(back = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter);
    else return static_cast <int>(back = ErrorCode::Ok); 
}

int checkPassword(std::string firstpassword, std::string secondpassword) {
    if (!doPasswordsMatch(firstpassword, secondpassword))
        return static_cast<int>(ErrorCode::PasswordsDoNotMatch);
    else
        return checkPasswordRules(firstpassword);
}
