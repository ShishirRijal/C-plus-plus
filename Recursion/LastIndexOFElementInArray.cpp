#include <iostream>
using namespace std;

int getLastIndex(int a[], int size, int num)
{
    if (size == 0)
        return -1;
    if (a[size - 1] == num)
        return size - 1;
    return getLastIndex(a, size - 1, num);
}

int main()
{
    int arr[] = {1, 3, 4, 23, 34, 23, 434, 23, 43, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter a number to search: ";
    cin >> num;
    cout << getLastIndex(arr, size, num);
    return 0;
}