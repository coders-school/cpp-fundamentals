#include "validation.hpp"
#include <bits/stdc++.h>
std::string getErrorMessage(int a){
    std::string feedback = "?";
    switch(a){
        case 1:{feedback = "Ok";
        break;}
        case 2:{feedback = "PasswordNeedsAtLeastNineCharacters";
        break;}
        case 3:{feedback = "PasswordNeedsAtLeastOneNumber";
        break;}
        case 4:{feedback = "PasswordNeedsAtLeastOneSpecialCharacter";
        break;}
        case 5:{feedback = "PasswordNeedsAtLeastOneUppercaseLetter";
        break;}
        case 6:{feedback = "PasswordsDoNotMatch";
        break;}
    }
    return feedback;
}
bool doPasswordsMatch(std::string pass1, std::string pass2){
    bool check = false;
    if(pass1==pass2){
        check = true;
    }
    return check;
}
int checkPasswordRules(std::string pass1){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(Ok,PasswordNeedsAtLeastOneUppercaseLetter);
    int a = dist(gen);
    return a;
}
int checkPassword(std::string pass1, std::string pass2){
    int back = 0;
    bool check = false;
    check = doPasswordsMatch(pass1, pass2);
    if(check){
        back = checkPasswordRules(pass1);
    } else {
        back = PasswordsDoNotMatch;
    }
    return back;
}
