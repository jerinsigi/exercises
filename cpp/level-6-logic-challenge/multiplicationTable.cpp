//Print the multiplication table of 1 to 10 numbers. (Eg: 1 x 2 = 2)

#include <iostream>
using namespace std;

int main(){
    cout << "Multiplication Tables"<< endl;

    for(int i=1;i<=10;i++){
        cout<< "Multiplication Table of "<<i<<endl;
        for(int j=1;j<=10;j++){
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
        }
    }

    return 0;
}
