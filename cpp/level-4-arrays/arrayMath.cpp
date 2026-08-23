//14. Find the sum and average of an array

#include <iostream>
using namespace std;

int getSum(int numbers[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=numbers[i];
    }
    return sum;
}

int getAverage(int numbers[],int size){
    return getSum(numbers,size)/size;
}

int main(){
    int size=5;
    int numbers[size];

    cout << "Enter "<< size <<" numbers to array : ";
    for(int i=0;i<size;i++){
        cin >> numbers[i];
    }

    cout << "Sum of elements in array is : " << getSum(numbers,size)<<endl;
    cout << "Average of elements in array is : " << getAverage(numbers,size) << endl;

    return 0;
}
