#pragma once

enum class Error {
        Ok,
        PasswordNeedsAtLeastNineCharacters,
        PasswordNeedsAtLeastOneNumber,
        PasswordNeedsAtLeastOneSpecialCharacter,
        PasswordNeedsAtLeastOneUppercaseLetter,
        PasswordsDoNotMatch
    }; 
    
std::string getErrorMessage(int errcode) {
    switch (errcode) {
        case 0:
            return "Ok";
        case 1:
            return "PasswordNeedsAtLeastNineCharacters";
        case 2:
            return "PasswordNeedsAtLeastOneNumber";
        case 3:
            return "PasswordNeedsAtLeastOneSpecialCharacter";
        case 4:
            return "PasswordNeedsAtLeastOneUppercaseLetter";
        case 5:
            return "PasswordsDoNotMatch";
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
    Error back;
    bool OneNumber, OneUppercaseLetter, OneSpecialCharacter;
    OneNumber = false;
    OneUppercaseLetter = false;
    OneSpecialCharacter = false;
    if (pass.length()<9) 
        return static_cast <int>(back = Error::PasswordNeedsAtLeastNineCharacters);
    else ;
        for (i = 0; i<pass.length(); ++i) {
            if (pass[i] >= '0' && pass[i] <= '9')
                OneNumber = true;
            if (pass[i] >= 'A' && pass[i] <= 'Z')
                OneUppercaseLetter = true;
            if (!(pass[i] >= '0' && pass[i] <= '9') && !(pass[i] >= 'A' && pass[i] <= 'Z') && !(pass[i] >= 'a' && pass[i] <= 'z') && (pass[i] > 31 && pass[i] < 127))
                OneSpecialCharacter = true;
        }
    if (!OneNumber)
        return static_cast <int>(back = Error::PasswordNeedsAtLeastOneNumber);
    else
        if (!OneUppercaseLetter)
            return static_cast <int>(back = Error::PasswordNeedsAtLeastOneUppercaseLetter);
        else
            if (!OneSpecialCharacter)
                return static_cast <int>(back = Error::PasswordNeedsAtLeastOneSpecialCharacter);
    else return static_cast <int>(back = Error::Ok); 
}

int checkPassword(std::string firstpassword, std::string secondpassword) {
    if (!doPasswordsMatch(firstpassword, secondpassword))
        return static_cast<int>(Error::PasswordsDoNotMatch);
    else
        return checkPasswordRules(firstpassword);
}
