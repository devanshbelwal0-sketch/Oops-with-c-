#include <iostream>
using namespace std;

class Student {
private:
    int scores[5];

public:
    void input() {
        cout << "Enter 5 exam scores: ";
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    int n;
    cout << "Enter number of students (including Anna): ";
    cin >> n;

    Student students[100];
    int annaScore;

    cout << "\nEntering scores for Anna:\n";
    students[0].input();
    annaScore = students[0].calculateTotalScore();

    int count = 0;
    for (int i = 1; i < n; i++) {
        cout << "\nEntering scores for student " << i + 1 << " of " << n << ":\n";
        students[i].input();
        int total = students[i].calculateTotalScore();
        if (total > annaScore) {
            count++;
        }
        if (i < n - 1) {
            cout << "Students left to enter: " << (n - i - 1) << endl;
        }
    }

    cout << "\nNumber of students who scored higher than Anna: " << count << endl;
    return 0;
}