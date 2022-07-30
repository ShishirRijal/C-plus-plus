#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    void operator=(Complex &c)
    {
        // Complex temp;
        real = c.real;
        img = c.img;
        // return
    }

    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 5), c2;
    c2 = c1;
    c2.display();
    return 0;
}