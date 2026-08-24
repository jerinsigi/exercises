//Without using multiplication (*), calculate the product of two numbers.

#include <iostream>
using namespace std;

int main(){
    int a,b,multiplyValue;
    cout<< "Enter a and b of a*b to do multiplication : ";
    cin>> a>>b;
    multiplyValue=a;

    for(int i=1;i<b;i++){
        multiplyValue+=a;
    }

    cout<<a<<"*"<<b<<"="<<multiplyValue<<endl;

    return 0;
}
