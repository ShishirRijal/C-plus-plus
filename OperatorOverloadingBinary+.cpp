#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    // I'm returning reference to the object so that it will help in chainging the operator
    Complex &operator+(Complex c)
    {
        real = real + c.real;
        img = img + c.img;
        return *this;
    }

    void display()
    {
        char op = '+';
        if (img < 0)
            op = '-';
        cout << real << op << abs(img) << "i" << endl;
    }
};

int main()
{

    Complex c1(12, 55);
    Complex c2(10, 11);
    c1 + c2 + c2;
    c1.display();

    c1.display();
    return 0;
}