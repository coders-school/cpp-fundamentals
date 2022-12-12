#include "validation.hpp"
#include <string>
// TODO: Put implementations hereda

std::string getErrorMessage(ErrorCode err) {
    int num = static_cast<int>(err);
    switch (num) {
    case 0:
        return "Ok";
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
        return "Password needs to have at least one uppercase letter";
        break;
    case 5:
        return "Passwords do not match";
        break;
    }
}
bool doPasswordsMatch(const std::string& pas1, const std::string& pas2) {
    if (pas1 == pas2) {
        return true;
    } else
        return false;
}
ErrorCode checkPasswordRules(const std::string& pas) {
    bool check = true;

    if (pas.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    auto IsDigit = [](auto n) { return std::isdigit(n); };
    check = std::none_of(pas.begin(), pas.end(), IsDigit);
    if (!check) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    auto SpecChar = [](auto n) { return std::ispunct(n); };
    check = std::none_of(pas.begin(), pas.end(), SpecChar);
    if (!check) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    auto UppLet = [](auto n) { return std::isupper(n); };
    check = std::none_of(pas.begin(), pas.end(), UppLet);
    if (!check) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        return ErrorCode::Ok;
    }
}
ErrorCode checkPassword(std::string str1, std::string str2) {
    if (!doPasswordsMatch(str1, str2)) {
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(str1);
    }
}
