//
//  main.cpp
//  Swap
//
//  Created by Marni Velick on 10/6/21.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wordOne;
    string wordTwo;
    string temp;
    
    cout << "Type a word." << endl;
    cin >> wordOne;
    
    cout << "Type a second word." << endl;
    cin >> wordTwo;
    
    temp = wordOne;
    wordOne = wordTwo;
    wordTwo = temp;
    
    cout << "After swapping values, word one is: " << wordOne << " and word two is: " << wordTwo << endl;
     
     return 0;
}
