#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of users: ";
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
    string name;
    int u;
    float amt;
    cout << "Enter the name of the user: ";
    getline(cin,name);
    cout << "Enter the number of unit consumes: ";
    cin >> u;
    cin.ignore();
    if(u<=100)
    {
        amt=u*0.60;
    }
    else if(u<=300)
    {
        amt=(100*0.60)+(u-100)*0.80;
    }
    else
    {
        amt=(100*0.60)+(200*0.80)+(u-300)*0.90;
    }
    if(amt < 50)
    {
        amt=50;
    }
    if(amt>300)
    {
        amt=amt+amt*0.15;
    }
    cout << "The name of the user is: " << name << endl;
    cout << "Total units consumed: " << u << endl;
    cout << "The total amount bill is: RS " << amt << endl;
    }
 return 0;
}