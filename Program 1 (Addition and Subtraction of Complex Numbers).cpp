//Program 1 : Addition and Subtraction of Complex Numbers 
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex subtract(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, sum, difference;

    cout << "Enter first complex number:" << endl;
    c1.getData();

    cout << "\nEnter second complex number:" << endl;
    c2.getData();

    sum = c1.add(c2);
    difference = c1.subtract(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    return 0;
}
