#include <iostream>
using namespace std;

class Dollar
{
    double dollar;

public:
    Dollar(int d)
    {
        dollar = d;
    }

    double get()
    {
        return dollar;
    }
};

class Ruppee
{
    double ruppee;

public:
    Ruppee(double r)
    {
        ruppee = r;
    }
    // Conversion at destionation using constructor
    Ruppee(Dollar d)
    {
        ruppee = d.get() * 120;
    }
    double get()
    {
        return ruppee;
    }
};

int main()
{
    Dollar d1(20);
    Ruppee r1 = d1;
    cout << "$" << d1.get() << " = Rs." << r1.get() << endl;

    return 0;
}