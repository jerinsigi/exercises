//Print all numbers between 1 and N that are divisible by 3 but not by 5.

#include <iostream>
using namespace std;

int main(){
    int limit;

    cout << "Enter limit to search numbers that are divisible by 3 but not by 5 : ";
    cin>>limit;

    cout<< "Numbers that are divisible by 3 but not by 5 are :";
    for(int i=1;i<=limit;i++){
        if(i%3==0&&i%5!=0){
            cout << " "<<i<<" ";
        }
    }
    return 0;
}
