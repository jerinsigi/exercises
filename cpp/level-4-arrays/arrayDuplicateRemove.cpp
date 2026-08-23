//Remove duplicate values

#include <iostream>
using namespace std;

int removeDuplicates(int numbers[], int size){
    if (size <= 0) return 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] == numbers[j]) {
                for (int k = j; k < size - 1; k++) {
                    numbers[k] = numbers[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    return size;
}

int main(){
    int size = 5;
    int numbers[5];

    cout << "Enter " << size << " numbers to array : ";
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }

    int newSize = removeDuplicates(numbers, size);

    cout << "New array after removing duplicates is : ";
    for(int i = 0; i < newSize; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
