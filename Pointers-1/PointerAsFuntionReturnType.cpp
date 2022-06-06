#include <iostream>
using namespace std;

int sum1(int a, int b)
{
    // the address is different from main..
    // so new variables are created...
    cout << "Address of a = " << &a << ", and of b = " << &b << endl;
    return a + b;
}

int *sum2(int *a, int *b)
{
    // the address is same as in main..
    // so no new varibale is created
    cout << "Address of a = " << a << ", and of b = " << b << endl;
    int *sum = new int;
    *sum = (*a) + (*b);
    return sum;
}

int main()
{
    int a = 5, b = 6;
    cout << "Address of a = " << &a << ", and of b = " << &b << endl;
    cout << "Pass by value" << endl;
    cout << "The sum is " << sum1(a, b) << endl;
    cout << "The sum is " << *sum2(&a, &b) << endl;
    return 0;
}