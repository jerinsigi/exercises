//Find the factorial of a number

#include <iostream>
#include <conio.h>
using namespace std;

long long fact(double n){
    if(n!=1)
    return n*fact(n-1);
    else
    return n;
}

int main(){
    int num;

    cout << "Enter number to check factorial: ";
    cin >> num;
    cout << "Factorial of "<<num<<" is "<<fact(num);
}
