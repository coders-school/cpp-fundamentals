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
