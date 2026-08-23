// Find the sum of even numbers from 1 to N.


#include <iostream>
#include <conio.h>
using namespace std;

int sumEven(int limit){
    int sum=0;
    for(int i=1;i<=limit;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int limit;

    cout << "Enter limit to check sum of event numbers : ";
    cin>>limit;

    cout << "Sum of first even numbers between 1 and "<<limit<<" is : "<<sumEven(limit);

    return 0;
}
