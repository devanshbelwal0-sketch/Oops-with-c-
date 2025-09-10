#include <iostream>
using namespace std;

class Complex {
public:
    int real, img;

    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, img + c.img);
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, img - c.img);
    }

    bool operator==(Complex c) {
        return (real == c.real && img == c.img);
    }

    void show() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2), c2(1, 4);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Sum: ";
    sum.show();

    cout << "Difference: ";
    diff.show();

    if (c1 == c2)
        cout << "c1 and c2 are equal" << endl;
    else
        cout << "c1 and c2 are not equal" << endl;

    return 0;
}