#include <iostream>
#include <string>

// TODO: Implement modifyString()
// It should modify passed string to text "Other string"




void modifyString(std::string & str){
    std::string & EditString = str;
    EditString = "Other string";    
}



int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
