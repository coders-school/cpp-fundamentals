#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
   

    if(command == "add"){
        cout<<std::to_string(first+second)<<endl;
        return std::to_string(first+second);
    }
    else if (command == "subtract"){
        cout<<std::to_string(first-second)<<endl;
        return std::to_string(first - second);
        
    }
    else if (command == "multiply"){
        cout<<std::to_string(first*second)<<endl;
        return std::to_string(first*second);
    }
    else if (command == "divide") {
        if (first == 0 || second == 0){
           
            return "Division by 0";
        }
        cout<<std::to_string(first/second)<<endl;
        return std::to_string(first / second); 
    }
    else {
        cout<<"Invalid data"<<endl;
        return "Invalid data";
    }

}
