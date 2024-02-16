#include "validation.hpp"
#include <cctype>
#include <iostream>
#include <string>

std::string getErrorMessage(ErrorCode faultcode) {
    switch (faultcode) {
    case ErrorCode::Ok:
        return "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
        break;
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
    if (pass.length() < 9)
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
    else if (!OneUppercaseLetter)
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    else if (!OneSpecialCharacter)
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    else 
        return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string firstpassword, std::string secondpassword) {
    if (!doPasswordsMatch(firstpassword, secondpassword))
        return ErrorCode::PasswordsDoNotMatch;
    else
        return checkPasswordRules(firstpassword);
}
