// Print a right triangle with stars.

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int limit;

    cout << "Enter limit : ";
    cin >> limit;

    for(int i=0;i<limit+1;i++){
        for(int j=0;j<i;j++){
            cout << "* ";
        }
        cout<<endl;
    }
}
