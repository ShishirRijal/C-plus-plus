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

    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
    operator int()
    {
        return real;
    }
};

int main()
{
    Complex c1(4, 5), c2;
    c2 = c1;
    c2.display();
    int a = c2;
    cout << "a = " << a << endl;
    return 0;
}