//Given a number, print the next palindrome.

#include<iostream>
using namespace std;

bool isPalindrome(int num){
    int originalNumber = num;
    int reversedNumber = 0;

    for(int i=0;num>0;i++){
        reversedNumber= reversedNumber*10+num%10;
        num/=10;
    }
    return originalNumber==reversedNumber;
}

int main(){
    int num;

    cout<< "Enter number tochcek palindrome : ";
    cin >> num;

    while(!isPalindrome(num)){
        num++;
    }
    if(isPalindrome(num)){
        cout << "Next palindrome is : "<< num<< endl;
    }

    return 0;
}
