// Check whether a number is even or odd.

#include <conio.h>
#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter number to check Odd or Even : ";
    cin>>num;

    if(num%2==0){
        cout<<num<<" is Even";
    }else{
        cout<<num<<" is Odd";
    }
    getch();
}
