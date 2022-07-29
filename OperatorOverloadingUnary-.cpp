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
    Complex &operator-()
    {
        real = -real;
        img = -img;
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

    Complex c(12, 55);
    c.display();
    -c;
    c.display();
    return 0;
}