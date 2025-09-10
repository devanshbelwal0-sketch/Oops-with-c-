#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    char ch;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the character to remove: ";
    cin >> ch;

    string updated = "";

    for (int i = 0; i < input.length(); ++i) {
        if (input[i] != ch) {
            updated += input[i];
        }
    }

    cout << "Updated string: " << updated << endl;

    return 0;
}