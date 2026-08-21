// Print all prime numbers between 1 and N.

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int limit;

    cout << "Enter limit to print prime numbers: ";
    cin>>limit;

    for(int i=2;i<=limit;i++){
        bool isPrime=true;
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
    if(isPrime){
        cout<<"Prime : "<<i<<endl;
    }
    }
}
