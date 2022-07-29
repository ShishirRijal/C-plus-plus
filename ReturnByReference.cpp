#include <iostream>
using namespace std;

int &min(int &a, int &b)
{
    int *p = new int;
    *p = 5;
    return *p;
    // return a > b ? b : a;
}
int max(int &a, int &b)
{
    return a > b ? a : b;
}

int main()
{
    int c, d, large, small;
    cin >> c >> d;
    large = max(c, d);
    small = min(c, d);
    cout << "largest = " << large << endl;
    cout << "smallest = " << small << endl;
    min(c, d) = -10;
    small = min(c, d);
    cout << "smallest = " << small << endl;

    cout << "c = " << c << " and d = " << d << endl;
    return 0;
}