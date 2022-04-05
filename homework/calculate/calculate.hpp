#pragma once
#include <string>
using namespace std;

string calculate(const string& command, int first, int second)
{
   if(command=="add")
  {
       return to_string(first + second);
  }
    else if(command=="substract")
  {
         return to_string(first - second);
  }
    else if(command=="multiply")
  {
        return to_string(first * second);
  }
   else if(command=="divide")
  {
        return to_string(first / second);
  }
    else return "Invalid data";

}

int main()
{
    cout << calculate("add",5,5) << endl;
    return 0;
}
