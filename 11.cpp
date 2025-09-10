#include <iostream>
#include <conio.h>
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar() {
        totalCars++;
        totalCash += 0.5;
    }

    void nonPayCar() {
        totalCars++;
    }

    void display() const {
        cout << "\nTotal cars passed: " << totalCars << endl;
        cout << "Total cash collected: RS " << totalCash << endl;
    }
};

int main() {
    TollBooth booth;
    char key;

    cout << "TollBooth Simulation\n";
    cout << "Press 'p' for paying car, 'n' for non-paying car, ESC to exit.\n";

    while (true) {
        key = _getch();

        if (key == 27) {
            booth.display();
            break;
        } else if (key == 'p' || key == 'P') {
            booth.payingCar();
            cout << "Paying car recorded.\n";
        } else if (key == 'n' || key == 'N') {
            booth.nonPayCar();
            cout << "Non-paying car recorded.\n";
        }
    }

    return 0;
}