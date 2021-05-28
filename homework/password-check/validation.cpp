#include "validation.hpp"

std::string getErrorMessage(ErrorCode error) {
     switch (static_cast<int>(error)) {
     case 0 : return "Ok";
     case 1 : return "Password needs to have at least nine characters";
     case 2 : return "Password needs to have at least one number";
     case 3 : return "Password needs to have at least one special character";
     case 4 : return "Password needs to have at least one uppercase letter";
     case 5 : return "Passwords do not match";
     default : return "Invalid error code";
     }
 }
 
bool doPasswordsMatch(std::string str1, std::string str2){

        if(str1 != str2){
           return false;
        }

      return true;
 }
 
ErrorCode checkPasswordRules(std::string str){

    if(str.size() < 9){
        return static_cast<ErrorCode>(1);
    }

    if(std::none_of(str.cbegin(), str.cend(), [](unsigned char c){ return std::isdigit(c);})){
        return static_cast<ErrorCode>(2);
    }
    
    if(std::all_of(str.cbegin(), str.cend(), [](unsigned char c){ return std::isalnum(c);})){
        return static_cast<ErrorCode>(3);
    }

    if(std::none_of(str.cbegin(), str.cend(), [](unsigned char c){ return std::isupper(c);})){
        return static_cast<ErrorCode>(4);
    }

    return static_cast<ErrorCode>(0);
}

ErrorCode checkPassword(std::string str1, std::string str2){
    
    if(!doPasswordsMatch(str1, str2)){
        return ErrorCode::PasswordsDoNotMatch;
    }

    auto result = checkPasswordRules(str1);

    return result;
}


