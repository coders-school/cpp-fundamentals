#include "validation.hpp"
#include <random>
#include <iostream>
#include <memory>
#include <cctype>
#include <cmath>
#include <algorithm>
// TODO: Put implementations here


std::string getErrorMessage(ErrorCode msg)
{
      switch (msg)
    {
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
    return "Ok";
}
bool doPasswordsMatch(std::string password1, std::string password2)
{
    if (password1 == password2)
    {
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(std::string pass)
{
    if (pass.size()< 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::none_of(pass.begin(), pass.end(), ::isdigit))
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
       
    if (std::none_of(pass.begin(), pass.end(), [] (char ch) { return isupper(ch);})) 
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
   //std::cout<<"\n \" \\ ";
    std::string specialChar = "\" !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~\"";
    auto result = std::find_first_of(pass.begin(), pass.end(), specialChar.begin(), specialChar.end());
    if(result == pass.end())
        {
            return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        }
    return ErrorCode::Ok;
    
//         std::random_device r;
 
//     // Choose a random mean between 1 and 6
//     std::default_random_engine e1(r());
//     std::uniform_int_distribution<int> uniform_dist(0, 4);
//     int mean = uniform_dist(e1);

//     switch (mean)
//     {
//     case 0:
//         return ErrorCode::Ok;
//         break;
//     case 1:
//         return ErrorCode::PasswordNeedsAtLeastNineCharacters;
//         break;
//     case 2:
//         return ErrorCode::PasswordNeedsAtLeastOneNumber;
//         break;
//     case 3:
//         return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
//         break; 
//    case 4:
//         return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
//         break;
//     default:
//     return ErrorCode::PasswordsDoNotMatch;
//         break;
//     }
}

    ErrorCode checkPassword(std::string pass1, std::string pass2)
    {
        if(doPasswordsMatch(pass1, pass2))
        {
           return checkPasswordRules(pass1);
        }
        return ErrorCode::PasswordsDoNotMatch;
    }
