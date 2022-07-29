#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    void setValue(int r, int i)
    {
        real = r;
        img = i;
    }
    void display() const;
};

void Complex::display() const
{
    cout << real << "+" << img << "i" << endl;
}

int main()
{
    Complex c;
    c.setValue(5, 6);
    c.display();

    return 0;
}
