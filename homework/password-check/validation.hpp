#pragma once
#include <string>
#include <algorithm>
using namespace std;
enum ErrorCode {Ok,PasswordNeedsAtLeastNineCharacters,PasswordNeedsAtLeastOneNumber
,PasswordNeedsAtLeastOneSpecialCharacter,PasswordNeedsAtLeastOneUppercaseLetter,PasswordsDoNotMatch};

string getErrorMessage(ErrorCode errCode){
    switch(errCode){
        case Ok:
            return "Ok";
        case PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
        case PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
        case PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
        case PasswordsDoNotMatch:
            return "Passwords do not match";
    }
}
bool doPasswordsMatch(string pass1, string pass2){
    if(pass1 == pass2)
        return true;
    return false;
}
ErrorCode checkPasswordRules(std::string pass){
    if(pass.length() < 9)
        return PasswordNeedsAtLeastNineCharacters;

    if(!any_of(pass.begin(), pass.end(), ::isdigit))
        return PasswordNeedsAtLeastOneNumber;

    bool specialCheck = false;
    for(int i=0;i<pass.length();i++)
    {
        if ((pass[i]>=48 && pass[i]<=57)||(pass[i]>=65 && pass[i]<=90)||(pass[i]>=97 && pass[i]<=122))
            continue;
        else{
            specialCheck = true;
            break;
        }
    }
    if(!specialCheck)
        return PasswordNeedsAtLeastOneSpecialCharacter;

    bool upperCheck = false;
    for(int i=0;i<pass.length();i++){
        if(isupper(pass[i])){
            bool upperCheck = true;
            break;
        }
    }
    if(!upperCheck)
        return PasswordNeedsAtLeastOneUppercaseLetter;

    return Ok;
}
ErrorCode checkPassword(string pass1, string pass2){
    if(!doPasswordsMatch(pass1, pass2))
        return PasswordsDoNotMatch;
    return checkPasswordRules(pass1);
}
