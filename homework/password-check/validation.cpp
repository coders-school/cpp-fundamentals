#include "validation.hpp"
#include <iostream>
#include <string>

//konwersja enum na string 
std::string getErrorMessage(int err){
switch (err) {
    case 0:
    return"Ok";
    break;
    case 1:
    return "Password needs to have at least nine characters";
    break;
    case 2:
    return "Password needs to have at least one number";
    break;
    case 3:
    return "Password needs to have at least one special character";
    break;
    case 4:
    return  "Password needs to have at least one uppercase letter";
    break;
    case 5:
    return "Passwords do not match";
    break;
}
return "";
}

//sprawdzenie poprawnosci hasel
bool doPasswordMatch (std::string wordOne, std::string wordTwo){
    if(wordOne == wordTwo){
        return true;
    }
    else{
        return false;
    }
}

int checkPasswordRules (std::string pass){
 return ErrorCode::ok;      
}

//sprawdzenie hasla 
int checkPassword (std::string passFirst, std::string passSecond){
    auto check = doPasswordMatch(passFirst, passSecond);
    if (check == true){
        return ErrorCode::PasswordsDoNotMatch;
    }
    else {
        return checkPasswordRules(passFirst);
    }
} 
