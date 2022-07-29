#include <iostream>
using namespace std;

double interest(int p, int t, int r = 10)
{
    cout << "p = Rs." << p << ", t = " << t << " years, r = " << r << endl;
    return double((p * t * r) / 100);
}

int main()
{
    cout << "The interest is Rs." << interest(5000, 2, 20);
    cout << "The interest is Rs." << interest(5000, 2);

    return 0;
}