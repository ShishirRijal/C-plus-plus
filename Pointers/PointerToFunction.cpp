#include <iostream>
using namespace std;

void increment(int &a)
{
    a++;
}
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 4;
    // function name returns the address of the function
    void (*p)(int &);
    p = increment;
    p(x);
    int (*s)(int, int);
    s = sum;
    int sum = s(3, 4);
    cout << "Sum = " << sum << endl;
    cout << "Address of sum = " << &s << endl;
    cout << &p << endl;
    cout << x;

    return 0;
}