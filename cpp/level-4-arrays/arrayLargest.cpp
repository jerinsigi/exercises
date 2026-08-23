// Find the largest element from an array.

#include <iostream>
using namespace std;

int getLargest(int numbers[],int size){
    int largest=numbers[0];
    for(int i=0;i<size;i++){
        if(largest<numbers[i]){
            largest=numbers[i];
        }
    }
    return largest;
}

int main(){
    int size=5;
    int numbers[size];

    cout << "Enter "<< size <<" numbers to array : ";
    for(int i=0;i<size;i++){
        cin >> numbers[i];
    }

    cout << "Largest element in array is : " << getLargest(numbers,size);

    return 0;
}
