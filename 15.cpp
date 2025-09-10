#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    Number operator-() {
        return Number(-value);
    }

    Number operator++() {
        ++value;
        return *this;
    }

    Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }

    Number operator--() {
        --value;
        return *this;
    }

    Number operator--(int) {
        Number temp = *this;
        value--;
        return temp;
    }

    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n(5);

    cout << "Original: ";
    n.show();

    Number neg = -n;
    cout << "Unary - : ";
    neg.show();

    ++n;
    cout << "Pre-increment: ";
    n.show();

    n++;
    cout << "Post-increment: ";
    n.show();

    --n;
    cout << "Pre-decrement: ";
    n.show();

    n--;
    cout << "Post-decrement: ";
    n.show();

    return 0;
}