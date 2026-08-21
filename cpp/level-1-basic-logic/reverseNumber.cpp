//Reverse a 3-digit number.

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num,reminder;
    int revNum=0;

    cout<<"Enter number to reverse: ";
    cin>>num;

    while(num!=0){
        reminder=num%10;
        revNum=revNum*10+reminder;
        num/=10;
    }
    cout<<"Reverse Number: "<<revNum;
    getch();
}
