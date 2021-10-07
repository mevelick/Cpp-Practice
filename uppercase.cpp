#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[10];
    char x;
    cout << "Enter a word (that is less than 10 letters long) to be converted into uppercase letters." << endl;
    cin >> str;
    if(strlen(str)>10){
        cout << "Invalid entry, try again" << endl;
        cin >> str;
    }
    cout << "The word in all uppercase letters is: ";

    for(int i=0; i < strlen(str); i++){
        x = toupper(str[i]);
        cout << x;
    }

    return 0;
}
