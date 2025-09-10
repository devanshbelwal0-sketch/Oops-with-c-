#include<iostream>
using namespace std;
class areacalculator
{
public:
int calculatearea(int side )
{
    return(side*side);
}
int calculatearea(int l,int b)
{
    return(l*b);
}
int calculatearea(int base,float height)
{
    return(0.5*base*height);
}
};

int main()
{
    int s;
    int r;
    cin >> s;
    r=areacalculator().calculatearea(s);
    cout << "the area of the sqaure is: " << r;
    int l,b;
    cin >> l >> b;
    r=areacalculator().calculatearea(l,b);
    cout << "the area of the rectangle is: " << r;
    int base;
    float height;
    cin >> base >> height;
    r=areacalculator().calculatearea(base,height);
    cout << "the area of the triangle is: " << r;
    return 0;
}

