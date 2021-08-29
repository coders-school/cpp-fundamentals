#include "validation.hpp"
// TODO: Put implementations here
std::string getErrorMessage(ErrorCode err) {

}
bool doPasswordsMatch(const std::string& pwd1,const std::string& pwd2 ) {

	if(pwd1.compare(pwd2) == 0) {
		return true;
	}
	return false;
}
ErrorCode checkPasswordRules(const std::string& pwd) {
	srand(time(nullptr));
	auto resultRules = static_cast<ErrorCode>(rand()% 4);
	return resultRules;
}
ErrorCode checkPassword(const std::string& pwd1, const std::string& pwd2 ) {

}