//Count how many even digits are present in between 2 numbers

#include <iostream>
#include <conio.h>
using namespace std;

int evenCount(int startNum, int endNum){
    int count=0;
    for(int i=startNum;i<=endNum;i++){
        if(i%2==0){
            count++;
        }
    }
    return count;
}

int main(){
    int startNum,endNum;

    cout << "Enter start and end number to check even numbers in between it : ";
    cin >> startNum >> endNum;

    cout << "Number of even numbers between "<<startNum<< " and " << endNum << " is : "<< evenCount(startNum,endNum)<<endl;
    return 0;
}
