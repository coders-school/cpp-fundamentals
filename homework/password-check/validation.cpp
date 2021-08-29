#include "validation.hpp"
// TODO: Put implementations here
std::string getErrorMessage(ErrorCode err) {
    switch (err) {
    case ErrorCode::Ok:
        return "OK";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs at least nine characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs at least one number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs at least one special character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs at least one uppercase letter";
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
	
	default : std::cout << "Unknow error\n";
		break;
    }
}
bool doPasswordsMatch(const std::string& pwd1, const std::string& pwd2) {
    if (pwd1.compare(pwd2) == 0) {
        return true;
    }
    return false;
}
ErrorCode checkPasswordRules(const std::string& pwd) {
    srand(time(nullptr));
    auto resultRules = static_cast<ErrorCode>(rand() % 4);
    return resultRules;
}
ErrorCode checkPassword(const std::string& pwd1, const std::string& pwd2) {
	auto isEqual = doPasswordsMatch(pwd1, pwd2);
	if(!isEqual) {
		return ErrorCode::PasswordsDoNotMatch;
	}
	auto resultRules = checkPasswordRules(pwd1);
	return resultRules;
}