//Find the length of a string

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;

    cout << "Enter string to check it's length : ";
    cin >> name;

    cout<<"Length of the string "<<name<<" is : "<<name.length();
    return 0;
}
