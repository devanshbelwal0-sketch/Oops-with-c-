#include <iostream>
#include <string>
using namespace std;

class Hotel {
private:
    int Rno;
    string Name;
    float Tariff;
    int NOD;

    float CALC() {
        float amount = Tariff * NOD;
        if (amount > 10000) {
            amount *= 1.05;
        }
        return amount;
    }

public:
    void Checkin() {
        cout << "Enter Room Number: ";
        cin >> Rno;
        cin.ignore();
        cout << "Enter Customer Name: ";
        getline(cin, Name);
        cout << "Enter Tariff per Day: ";
        cin >> Tariff;
        cout << "Enter Number of Days: ";
        cin >> NOD;
    }

    void Checkout() {
        cout << "\n--- Checkout Details ---\n";
        cout << "Room Number: " << Rno << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Tariff per Day: Rs." << Tariff << endl;
        cout << "Number of Days: " << NOD << endl;
        cout << "Total Amount: Rs." << CALC() << endl;
    }
};

int main() {
    Hotel guest;
    guest.Checkin();
    guest.Checkout();
    return 0;
}