#include <iostream>
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
    // PREFIX
    Complex &operator++()
    {
        real++;
        img++;
        return *this;
    }
    // POSTFIXs

    Complex &operator++(int)
    {
        real++;
        img++;
        return *this;
    }

    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

int main()
{
    int a = 5;

    cout << a << endl;
    Complex c(23, 45);
    ++ ++ ++c;

    c.display();
    c++ ++ ++ ++;
    c.display();

    return 0;
}