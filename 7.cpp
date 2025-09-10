#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    string accountType;
    float balance;

public:
    void assignInitialValues(string n, int accNo, string type, float bal) {
        name = n;
        accountNumber = accNo;
        accountType = type;
        balance = bal;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else if (amount > 0) {
            balance -= amount;
        }
    }

    void display() {
        cout << "\n--- Account Summary ---\n";
        cout << "Depositor Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance Amount: Rs." << balance << endl;
    }
};

int main() {
    BankAccount acc;

    string name, type;
    int accNo;
    float initialBalance, depositAmt, withdrawAmt;

    cout << "Enter depositor name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNo;
    cin.ignore();
    cout << "Enter account type (Saving/Current): ";
    getline(cin, type);
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    acc.assignInitialValues(name, accNo, type, initialBalance);

    cout << "Enter amount to deposit: ";
    cin >> depositAmt;
    acc.deposit(depositAmt);

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmt;
    acc.withdraw(withdrawAmt);

    acc.display();

    return 0;
}
