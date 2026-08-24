//Convert lowercase to uppercase.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string str;

    cout << "enter string : ";
    getline(cin, str);

    for(char& c: str){
        c=toupper(c);
    }

    cout<< "Upper case is : "<< str;

    return 0;
}
