//Print all perfect numbers between 1 and N.

#include <iostream>
using namespace std;

void getPerfectNumbers(int limit){
    int sum=0;
    for(int i=2;i<=limit;i++){
        sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            cout<<" "<<i<<" " ;
        }
    }
}

int main(){
    int limit;

    cout<< "Enter limit to find perfect numbers : ";
    cin>>limit;

    cout << "Perfect numbers between 1 and " << limit << " are: ";
    getPerfectNumbers(limit);
    return 0;
}
