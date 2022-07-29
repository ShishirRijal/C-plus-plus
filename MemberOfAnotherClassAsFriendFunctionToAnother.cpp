/*
    Let's try to set and show the data of a class from another class using
    friend functions..
*/
#include <iostream>
using namespace std;

class B;
class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void print()
    {
        cout << "a = " << a << endl;
    }
    void setB(B &b, int x);
    void showB(B);
};

class B
{
    int b;

public:
    B(int x)
    {
        b = x;
    }
    void print()
    {
        cout << "b = " << b << endl;
    }
    friend void A::showB(B);
    friend void A::setB(B &, int);
};

void A::showB(B b)
{
    cout << "b = " << b.b << endl;
}
void A::setB(B &b, int x)
{
    b.b = x;
}

int main()
{
    A a(12);
    B b(45);
    a.print();
    a.setB(b, 45);
    a.showB(b);

    return 0;
}