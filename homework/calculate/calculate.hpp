#pragma once
#include <iostream>
#include <string>
#include <functional>
#include <map>
#include <string>


// std::map accepts only types of parameters in template barckets,
// therefore 'typedef' must be used to declere function pointer type
typedef std::string (*functionType)(int first, int second);

std::map<std::string, functionType> commands
{
    {"add", [](int first, int second){return std::to_string(first + second);}},
    {"subtract", [](int first, int second){return std::to_string(first - second);}},
    {"multiply", [](int first, int second){return std::to_string(first * second);}},
    {"divide", [](int first, int second){
        if(second == 0)
        {
             //Returning types should be consistent 
            return std::string("Division by 0");
        }
        return std::to_string(first / second);
    }}
};

std::string calculate(const std::string& command, int first, int second) 
{
    try
    {
        return commands.at(command)(first, second);   
    }
    catch(...)
    {
        return std::string("Invalid data");
    }
}
