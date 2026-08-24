//Swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main(){
    int num1,num2;

    cout<< "Enter two numbers to swap : ";
    cin>>num1>>num2;

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<< "Numbers after swapping : "<< num1<<" "<<num2<<endl;

    return 0;
}
