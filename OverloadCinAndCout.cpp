#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex()
    {
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    friend istream &operator>>(istream &, Complex &);
    friend ostream &operator<<(ostream &, Complex &);
};

istream &operator>>(istream &s, Complex &c)
{
    s >> c.real;
    s >> c.img;
    return s;
}
ostream &operator<<(ostream &s, Complex &c)
{
    s << c.real << "+" << c.img << "i" << endl;
    return s;
}
int main()
{
    Complex c;
    cin >> c;
    cout << c;
    return 0;
}