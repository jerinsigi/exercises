//Print a star pyramid.

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int limit;

    cout << "Enter limit : ";
    cin >> limit;

    for(int i=0;i<limit+1;i++){
        for (int space = 1; space <= (limit - i); space++) {
            cout << " ";
        }

        for(int j=0;j<i;j++){
            cout << "* ";
        }
        cout<<endl;
    }
    return 0;
}
