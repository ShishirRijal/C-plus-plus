#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci number at " << n << "th index is " << fibonacci(n) << endl;
    return 0;
}