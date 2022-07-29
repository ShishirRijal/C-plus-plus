/*
    When we call a function from the main function or any calling function it takes
    a substantial amount of time to jump to that function, save that to register,
    push the function arguments into the stack and return to calling function after executing
    the statements. For small programs we can eliminate this cost of calling the functions by
    declaring that function as inline..


*/

#include <iostream>
using namespace std;

inline void cube(int x)
{
    cout << "The cube of " << x << " is " << x * x * x;
}

int main()
{
    int a = 5;
    cube(a);
    return 0;
}