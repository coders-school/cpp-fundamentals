#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(enum ErrorCode error) {

    std::string message;

    switch (error) {

    case Ok: message = "Ok"; break;
    case PasswordNeedsAtLeastNineCharacters: message = "Password needs to have at least nine characters"; break;
    case PasswordNeedsAtLeastOneNumber: message = "Password needs to have at least one number"; break;
    case PasswordNeedsAtLeastOneSpecialCharacter: message = "Password needs to have at least one special character"; break;
    case PasswordNeedsAtLeastOneUppercaseLetter: message = "Password needs to have at least one uppercase letter"; break;
    case PasswordsDoNotMatch: message = "Passwords do not match"; break;
    }

    return message;
}

bool doPasswordsMatch(std::string password1, std::string password2) {

    if (password1 == password2) {
        return true;
    }
    else{
        return false;
    }
}

enum ErrorCode checkPasswordRules(std::string password) {

    bool digit = false;
    bool punct = false;
    bool uppercase = false;

    if (password.length() >= 9) {
    
        for (char& element : password) {
            if (isdigit(element)) {
                digit = true;
		break;
            }
        }
        if (digit != true) return ErrorCode::PasswordNeedsAtLeastOneNumber;

        for (char& element : password) {
            if (ispunct(element)) {
                punct = true;
		break;
            }
        }
        if (punct != true ) return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;

        for (char& element : password) {
            if (isupper(element)) {
                uppercase = true;
		break;
            }
        }
        if (uppercase != true) return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
	    return ErrorCode::PasswordNeedsAtLeastNineCharacters;}

    return ErrorCode::Ok;
}

enum ErrorCode checkPassword(std::string password1, std::string password2) {

    if (doPasswordsMatch(password1, password2)) {

        return checkPasswordRules(password1);
    }
    else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}

