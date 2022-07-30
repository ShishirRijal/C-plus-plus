#include <iostream>
using namespace std;

class Celsius;
class Fahrenheit
{
    double temp;

public:
    Fahrenheit(double t = 0.0)
    {
        temp = t;
    }
    // Conversion at source....
    operator Celsius();
    double get() { return temp; }
};

class Celsius
{
    double temp;

public:
    Celsius(int t)
    {
        temp = t;
    }
    double get() { return temp; }
};

Fahrenheit::operator Celsius()
{
    Celsius c((temp - 32) / 1.8);
    return c;
}

int main()
{
    Fahrenheit f(100);
    Celsius c = f;
    cout << c.get() << endl;
    return 0;
}