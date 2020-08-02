#include <iostream>
#include <string>

using namespace std;

int main(){
    
    const int SIZE = 10;
    
    // SETUP STORAGE ARRAYS
    string first_name[SIZE], surname[SIZE], fullname[SIZE];
    
    char answer = 'y';
    int count = 0;
    
    do{
        // CHECK STORAGE IS AVAILABLE
        if (count > SIZE)
        {
            cout << "Too many names\n";
            break;// end
        }
        
        cout << "enter you're name: ";
        cin >> first_name[count];
        
        cout << "enter your surname: ";
        cin >> surname[count];
        
        // JOIN UP THE NAMES
        fullname[count] = first_name[count] + "***" +surname[count];
        
        cout << "your full name is " << fullname[count] << '\n';
        count++;
        
        // ANY MORE NAMES STILL TO ENTER
        cout << "do it again? ";
        cin >> answer;
    } while (answer == 'y');
    
    // FINISH UP BY LISTING OUT THE DETAILS ENTERED
    for(int i = 0; i < count; i++)
        cout << first_name[i] << ' ' << surname[i] << " Full name is: " << fullname[i] << '\n';
    
    return 0;
}
