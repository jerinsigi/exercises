#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter limit: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        for (int space = 1; space <= (limit - i); space++) {
            cout << "  ";
        }


        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }


        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    for (int i = limit - 1; i >= 1; i--) {

        for (int space = 1; space <= (limit - i); space++) {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
