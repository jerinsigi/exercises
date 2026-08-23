//Find the frequency of each element.

#include <iostream>
using namespace std;

void getFrequency(int numbers[],int size){
    int count=0;
    bool visited[size]={false};

    for( int i=0;i<size;i++){
        if(visited[i]==false){

        for(int j=0;j<size;j++){
            if(numbers[i]==numbers[j]){
                count++;
                visited[j]=true;

            }
        }
         cout<< "Frequency of "<<numbers[i] << " is : "<<count<<endl;
         count=0;

    }
    }
    return;
}


int main(){
    int size=5;
    int numbers[5];

    cout<< "Enter " << size << " elements : ";
    for(int i=0;i<size;i++){
        cin>>numbers[i];
    }

    cout << "Frequency of each elements are : "<< endl;
    getFrequency(numbers,size);

}
