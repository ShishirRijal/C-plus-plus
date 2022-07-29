#include <iostream>
using namespace std;

int hcf(int f, int s)
{
    if (f % s == 0)
        return s;
    cout << "HCF(" << s << "," << f << f % s << ")" << endl;
    return hcf(s, f % s);
}

int main()
{
    int a = 45, b = 85;
    cout << "HCF is " << hcf(a, b) << endl;
}