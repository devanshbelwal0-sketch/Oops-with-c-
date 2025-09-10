#include<iostream>
using namespace std;
class SavingAccount
{ 
    private:
    double savingbalance;
    static double annualinterestrate;
    public:
    SavingAccount(double balance)
    {
        savingbalance=balance;
    }
    void calculatemonthlyinterest()
    {
        double monthlyinterest=(savingbalance*annualinterestrate)/12;
        savingbalance+=monthlyinterest;
    }   
    void display()
    {
        cout << "The balance is: " << savingbalance << endl;
    }
    static void modifyrate(double newrate)
    {
       annualinterestrate=newrate;
    }
};
 double SavingAccount::annualinterestrate=0.0;

int main()
{
    SavingAccount saver1(2000.0);
    SavingAccount saver2(3000.0); 
    SavingAccount::modifyrate(0.4);
    cout << "the rate has modified" << endl;
    saver1.calculatemonthlyinterest();
    saver2.calculatemonthlyinterest();
    cout << "saver 1 : " ;
    saver1.display();
    cout << "saver 2 : ";
    saver2.display();
    SavingAccount::modifyrate(0.5);
    cout << "the rate has modified" << endl;
    saver1.calculatemonthlyinterest();
    saver2.calculatemonthlyinterest();
    cout << "saver 1 : " ;
    saver1.display();
    cout << "saver 2 : ";
    saver2.display(); 
    return 0;
}