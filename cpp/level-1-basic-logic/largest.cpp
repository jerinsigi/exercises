// Read two numbers and print the larger number without using max()

#include <conio.h>
#include <iostream>
using namespace std;


int main(){
    int num1,num2;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    if(num1 > num2){
        cout<<"The larger number is: "<<num1;
    }else if(num2 > num1){
        cout<<"The larger number is: "<<num2;
    }else{
        cout<<"The numbers are equal: "<<num1;
    }

    getch();
}
