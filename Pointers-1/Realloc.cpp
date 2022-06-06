#include <iostream>
using namespace std;
int main()
{
    int n; //  this is stored in stack memory
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int *p;
    p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        p[i] = 2 * i + 3;
    }
    // let's say I need to increase the size of array now..
    // So I will use realloc to allocate the memory for my new array
    // If possible it will extend the existing contiguous memory address
    // else it will allocate new memory and copy existing values to it
    int *r = (int *)realloc(p, n * 2 * sizeof(int));
    cout << "p = " << p << ", r= " << r << endl;
    for (int i = n; i < n * 2; i++)
    {
        r[i] = 5 + i;
    }
    for (int i = 0; i < n * 2; i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;
    free(p);
    free(r);

    return 0;
}