//Find the sum of first N natural numbers.

#include <iostream>
#include <conio.h>
using namespace std;

int sum(int num){
    int sumValue=0;
    for(int i=1;i<=num;i++){
        sumValue+=i;
    }
    return sumValue;
}

int main(){
    int num;

    cout << "Enter limit to check sum : ";
    cin >> num;

    cout<<"Sum of "<< num << " numbers is : "<<sum(num);
    return 0;
}
