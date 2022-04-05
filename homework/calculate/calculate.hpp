#pragma once
#include <string>

#include <iostream>

using namespace std;

string result = "";

string calculate(const string& command,int first,int second){
        if(command=="add") {
            return to_string(first+second);
        }else if(command=="subtract"){
            return to_string(first-second);
        }else if(command=="multiply"){
            return to_string(first*second);
        }else if(command=="divide"){
            if(second==0){
                return "0";
            }
            else {
                return to_string(first / second);
            }
        }else{
            return "Invalid data";
        }
}

int main() {
    result = calculate("add", 10, 20);
    cout<<result<<endl;
    result = calculate("divide", 2, 0);
    cout<<result<<endl;
    result = calculate("hello", 2, 3);
    cout<<result<<endl;
    return 0;
}

