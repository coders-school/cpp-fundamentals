#include "validation.hpp"
#include <iostream>
#include <string>
#include <cctype>

std::string getErrorMessage(ErrorCode faultcode) {
    switch (faultcode) {
    case ErrorCode::Ok:
        return "Ok";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password Needs AtLeast Nine Characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password Needs AtLeast OneNumber";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password Needs AtLeast One Special Character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password Needs AtLeast One Uppercase Letter";
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords Do Not Match";
    }
}

bool doPasswordsMatch(std::string psw1, std::string psw2) {
    if (psw1 == psw2)
        return true;
    else
        return false;
}

ErrorCode checkPasswordRules(std::string pass) {
    bool OneNumber, OneUppercaseLetter, OneSpecialCharacter;
    OneNumber = false;
    OneUppercaseLetter = false;
    OneSpecialCharacter = false;
    if (pass.length()<9)
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    for (auto element : pass) {
        if (isdigit(element))
            OneNumber = true;
        if (!isalnum(element))
            OneSpecialCharacter = true;
        if (isupper(element))
            OneUppercaseLetter = true;
    }
    if (!OneNumber)
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    else
        if (!OneUppercaseLetter)
            return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
        else
            if (!OneSpecialCharacter)
                return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    else return ErrorCode::Ok; 
}

ErrorCode checkPassword(std::string firstpassword, std::string secondpassword) {
    if (!doPasswordsMatch(firstpassword, secondpassword))
        return ErrorCode::PasswordsDoNotMatch;
    else
        return checkPasswordRules(firstpassword);
}
