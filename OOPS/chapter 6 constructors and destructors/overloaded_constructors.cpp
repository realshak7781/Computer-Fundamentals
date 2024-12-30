#include <bits/stdc++.h>
using namespace std;

class Complex { // Renamed from 'complex' to 'Complex'
    float x, y;

public:
    Complex() {}
    Complex(float a) {
        x = y = a;
    }
    Complex(float a, float b) {
        x = a;
        y = b;
    }

    friend Complex sum(Complex c1, Complex c2);
    friend void show(Complex c);
};

Complex sum(Complex c1, Complex c2) {
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

void show(Complex c) {
    cout << c.x << " + i" << c.y << endl;
}

int main() {
    Complex c1(2, 3); // Renamed to use 'Complex'
    Complex c2(4, 5); // Renamed to use 'Complex'
    Complex c3 = sum(c1, c2);
    show(c3);

    return 0;
}
