#include <bits/stdc++.h>
using namespace std;

class Complex {
    float x; // Real part
    float y; // Imaginary part

public:
    // Default constructor
    Complex() : x(0), y(0) {}

    // Parameterized constructor
    Complex(float real, float imag) : x(real), y(imag) {}

    // Operator overloading for addition
    Complex operator+(const Complex& c);

    // Display method
    void display() const;
};

// Definition of the overloaded + operator
Complex Complex::operator+(const Complex& c) {
    Complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}

// Definition of the display method
void Complex::display() const {
    cout << x << " + j" << y << endl;
}

int main() {
    // Creating complex number objects
    Complex c1(3.0, 4.5); // Complex number 3 + 4.5j
    Complex c2(1.5, 2.5); // Complex number 1.5 + 2.5j

    // Adding complex numbers using the overloaded + operator
    Complex c3 = c1 + c2;

    // Displaying the result
    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
