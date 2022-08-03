/*
5.	WAP to add and swap private data of two different classes.
Use separate function for add and swap.
*/
#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    friend int add(A, B);
    friend void swap(A &, B &);
    friend void display(A, B);

public:
    A(int x)
    {
        a = x;
    }
};

class B
{

    int b;
    friend int add(A, B);
    friend void swap(A &, B &);
    friend void display(A, B);

public:
    B(int a)
    {
        b = a;
    }
};
int add(A a, B b)
{
    return a.a + b.b;
}
void swap(A &a, B &b)
{
    int temp = a.a;
    a.a = b.b;
    b.b = temp;
}
void display(A a, B b)
{
    cout << "A = " << a.a << " B = " << b.b << endl;
}

int main()
{
    A a(4);
    B b(5);
    cout << add(a, b) << endl;
    cout << "Before Swapping" << endl;
    display(a, b);
    swap(a, b);
    cout << "After Swapping" << endl;
    display(a, b);
    return 0;
}