#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    friend ostream &operator<<(ostream &output, Complex &c);
    friend istream &operator>>(istream &input, Complex &c);
};

ostream &operator<<(ostream &output, Complex &c)
{
    char ch;
    if (c.imaginary < 0)
        ch = '-';
    else
        ch = '+';
    output << c.real << ch << abs(c.imaginary) << "i" << endl;
    return output;
}

istream &operator>>(istream &input, Complex &c)
{
    input >> c.real >> c.imaginary;
    return input;
}

int main()
{
    Complex c;

    cout << "Enter a complex number(a,b): ";
    cin >> c;
    cout << c;

    return 0;
}