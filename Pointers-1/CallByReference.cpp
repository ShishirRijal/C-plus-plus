#include <iostream>
using namespace std;

void update(int a)
{
    a++;
}
void increment(int *a)
{
    (*a)++;
}
void decrement(int &a)
{
    a--;
}
int main()
{
    int a = 45;
    cout << "a = " << a << endl;
    // This doesn't update the value of variable
    // as we are only passing the value to the function
    update(a);
    cout << "a = " << a << endl;
    // since the address of a is passed, it changes
    // the actual value stored in the address
    increment(&a);
    cout << "a = " << a << endl;
    decrement(a);
    cout << "a = " << a << endl;
    return 0;
}
