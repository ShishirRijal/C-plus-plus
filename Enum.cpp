#include <iostream>
using namespace std;

enum days
{
    Sun = 1,
    Mon,
    Tues
};

int main()
{
    int n = 2;
    switch (n)
    {
    case Sun:
        cout << "Sunday" << endl;
        break;
    case Mon:
        cout << "Monday" << endl;
        break;
    default:
        cout << "Not a valid number" << endl;
    }

    return 0;
}