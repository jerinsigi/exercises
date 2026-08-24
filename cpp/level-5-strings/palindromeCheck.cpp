//Check whether a string is a palindrome.

#include<iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    string name,reversedString;

    cout << "Enter string to check palindrome : ";
    cin >> name;

    reversedString = name;
    reverse(reversedString.begin(), reversedString.end());

    if(name==reversedString)
    cout << "It is Palindrome";
    else{
        cout<< "Not a palindrome";
    }
    return 0;
}
