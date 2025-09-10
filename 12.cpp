#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
    public:
    int h;
    int m;
    int s;
    Time()
    {
        h=m=s=0;
    }
    void add(int h,int m,int s)
    {
      this->h=h;
      this->m=m;
      this->s=s;
    }
    void add(Time t1,Time t2)
    {
        s=t1.s+t2.s;
        m=t1.m+t2.m+(s/60);
        h=t1.h+t2.h+(m/60);
        
        s=s%60;
        m=m%60;
        h=h%24;
    }
    void display()
    
    {
        cout << setfill('0') << setw(2) << h << ":";
        cout << setfill('0') << setw(2) << m << ":";
        cout << setfill('0') << setw(2) << s << ":" << endl;
    }
};
 int main()
 {
    Time t1,t2,t3;
    int h,m,s;
    cout<<"Enter time 1 (h m s): ";
    cin>>h>>m>>s;
    t1.add(h,m,s);
    cout<<"Enter time 2 (h m s): ";
    cin>>h>>m>>s;
    t2.add(h,m,s);
    t3.add(t1,t2);
    cout<<"Time 1: ";
    t1.display();
    cout<<"Time 2: ";
    t2.display();
    cout<<"Sum of Time 1 and Time 2: ";
    t3.display();
    return 0;
 }