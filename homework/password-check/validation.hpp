// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <iostream>

enum class ErrorCode
{
		Ok,
			PasswordNeedsAtLeastNineCharacters,
				PasswordNeedsAtLeastOneNumber,
					PasswordNeedsAtLeastOneSpecialCharacter,
						PasswordNeedsAtLeastOneUppercaseLetter,
							PasswordsDoNotMatch
};

	
std::string getErrorMessage(ErrorCode a);  // converts Enum to string (zeby mozna bylo wyswietlic przez std::cout)
bool doPasswordsMatch(std::string a,std::string b); // sprawdza czy string a jest taki sam jak string b
ErrorCode checkPasswordRules(std::string a); // jak dasz stringa to zwraca losowa wartosc z enuma wyzej zeby wyswietlic uzyj pierwszej funkcji
ErrorCode checkPassword(std::string a, std::string b); // sam juz nie pamietam zajzyj do .cpp


