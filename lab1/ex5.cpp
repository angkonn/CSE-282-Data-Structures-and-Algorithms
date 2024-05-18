// Write a C++ program to subtract two complex numbers

#include <iostream>
using namespace std;
struct Complex {
    double real;
    double imag;
};

Complex subtractComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

void displayComplex(const Complex& c, const string& label) {
    cout << label << ": " << c.real;
    if (c.imag >= 0) {
        cout << " + " << c.imag << "i";
    } else {
        cout << " - " << -c.imag << "i";
    }
    cout << endl;
}

int main() {

    Complex complex1, complex2;

    cout << "Enter the first complex number:" << endl;
    cout << "Real part: ";
    cin >> complex1.real;
    cout << "Imaginary part: ";
    cin >> complex1.imag;

    cout << "\nEnter the second complex number:" << endl;
    cout << "Real part: ";
    cin >> complex2.real;
    cout << "Imaginary part: ";
    cin >> complex2.imag;


    Complex difference = subtractComplex(complex1, complex2);


    displayComplex(complex1, "First Complex Number");
    displayComplex(complex2, "Second Complex Number");
    displayComplex(difference, "Difference");

    return 0;
}
