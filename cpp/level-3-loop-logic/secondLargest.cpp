//Find the second largest digit

#include <iostream>
#include <conio.h>
using namespace std;

int getSecondLargest(int num){
    int largest=0,secondLargest=0,current;
    num=abs(num);

    while(num>0){
        current=num%10;
        num/=10;
        if(current>largest){
            secondLargest = largest;
            largest = current;
        }
        else if(current > secondLargest && current != largest){
            secondLargest = current;
        }
    }
    return secondLargest;
}

int main(){
    int num;

    cout << "Enter number to find second largest : ";
    cin>>num;
    cout << "The second largest digit is : "<<getSecondLargest(num);

    return 0;
}
