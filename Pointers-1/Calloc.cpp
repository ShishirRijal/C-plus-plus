#include <iostream>
using namespace std;
int main()
{
    int n; //  this is stored in stack memory
    cout << "Enter the size of array: " << endl;
    cin >> n;
    // now let's create an array in heap memory
    int *p;
    p = (int *)calloc(n, sizeof(int));
    cout << "Before initialization: " << endl;
    // each array element is initialized with 0
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    cout << "Let's initialize our array:" << endl;
    for (int i = 0; i < n; i++)
    {
        p[i] = 2 * i + 3;
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl;
    return 0;
}