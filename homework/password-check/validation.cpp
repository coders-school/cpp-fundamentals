#include "validation.hpp"
#include <stdlib.h>
#include <time.h>

 std::string getErrorMessage(ErrorCode error)
 
 bool checkPasswordRules(std::string str1, std::string str2){

        if(str1!=str2){
           return false;
        }

      return true;
 }
 
ErrorCode checkPasswordRules(std::string){
    
     srand(time(NULL));
     int rand_number = rand()%5;
    
     return static_cast<ErrorCode>(rand_number);
} 

