//Read a number and determine whether it contains the digit 7.

#include <iostream>
using namespace std;

bool isNum(int num, int check){
    int digit=0;
    bool isThere=false;
    while(num>0){
        digit=num%10;
        num/=10;
        if(digit==check){
            isThere=true;
            break;
        }
    }
    return isThere;
}

int main(){
    int num;

    cout<< "Enter number to check if it has 7 in it : ";
    cin>>num;

    if (isNum(num, 7))
        cout << "The number contains 7";
    else
        cout << "The number does not contain 7";


    return 0;
}
