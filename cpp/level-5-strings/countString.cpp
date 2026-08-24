#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    cout << "Enter string: ";
    getline(cin, str);

    for (char c : str) {
        c = tolower(c);

        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u') {
            vowels++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else if (c >= 'a' && c <= 'z') {
            consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}
