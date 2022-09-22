#include <iostream>
#include <string>

using namespace std;

// It should modify passed string to text "Other string"
void modifyString(string &str) {
    str = "Other string";
}

int main() {
    string str{"Some string"};
    modifyString(str);
    cout << str << '\n';
    return 0;
}
