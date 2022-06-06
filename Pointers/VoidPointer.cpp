/*
    Void pointer is a generic pointer variable
    which doesn't have any definite data type and thus
    can't be dereferenced.
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    void *p;
    cout << "p = " << p << endl;
    // cout<<"*p = "<<*p>>endl; // can't be dereferenced
    return 0;
}