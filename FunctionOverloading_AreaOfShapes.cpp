#include <iostream>
#include <cmath>
using namespace std;

int area(int l, int b)
{
    return l * b;
}
int area(int l)
{
    return l * l;
}
double area(int a, int b, int c)
{
    int s = (a + b + c) / 2;
    return (double)sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    cout << "Area of square is " << area(5) << endl;
    cout << "Area of rectangel is " << area(5, 9) << endl;
    cout << "Area of triangle is " << area(2, 4, 4) << endl;

    return 0;
}
