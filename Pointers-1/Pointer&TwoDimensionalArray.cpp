#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    // assigning values
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = (i + j + 2) * 2;
        }
    }
    // let's see our array ...
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    // pointer to 1D array of 3 integers
    int(*p)[3] = arr;
    cout << "arr = " << arr << endl;
    cout << "p = " << p << endl;
    cout << "arr[0] = " << &arr[0] << endl;
    cout << "p+1 = " << p + 1 << endl;
    cout << "arr[1] = " << &arr[1] << endl;
    cout << "*(arr + 1) = " << *(arr + 1) << endl;
    cout << "*(arr + 1) + 2 = " << *(arr + 1) + 2 << endl;
    cout << "&arr[1][2] = " << &arr[1][2] << endl;
    cout << "*(*arr + 1)  = " << *(*arr + 1) << endl;
    cout << "arr[0][1] = " << arr[0][1] << endl;
    /*
        arr[i][j] = *(arr[i] + j);
                  = *(*(arr+i) + j);
    */
    return 0;
}