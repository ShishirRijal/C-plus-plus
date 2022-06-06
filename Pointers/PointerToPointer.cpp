/*
    We can chain the pointers as long as we need..
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 90;
    int *p = &a;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    int **q = &p;
    cout << "q = " << q << endl;
    cout << "*q = " << *q << endl; // address of p
    cout << "**q = " << **q << endl;
    a = **q + 2;
    cout << "a = " << a << endl;
    a = *p + 7;
    cout << "a = " << **q << endl;

    return 0;
}