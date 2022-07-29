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
    void swap(B &b);
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
    friend void A::swap(B &b);
};

void A::swap(B &b)
{
    int temp = a;
    a = b.b;
    b.b = temp;
}

int main()
{

    A a(6);
    B b(5);
    cout << "Before Swapping" << endl;
    a.print();
    b.print();
    a.swap(b);
    cout << "After Swapping" << endl;
    a.print();
    b.print();

    return 0;
}