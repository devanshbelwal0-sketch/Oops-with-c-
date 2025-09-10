#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int freq[256] = {0};

    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ') {
            freq[(unsigned char)input[i]]++;
        }
    }

    cout << "Non-repeating characters: ";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ' && freq[(unsigned char)input[i]] == 1) {
            cout << input[i] << " ";
        }
    }

    cout << endl;
    return 0;
}