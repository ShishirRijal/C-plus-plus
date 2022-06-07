#include <iostream>
using namespace std;

int getIndex(int a[], int size, int n, int currentIndex)
{
    if (size == 0)
        return -1;
    if (a[0] == n)
        return currentIndex;
    return getIndex(a + 1, size - 1, n, currentIndex + 1);
}

int getFirstIndex(int a[], int size, int num)
{
    if (size == 0)
        return -1;
    if (a[0] == num)
        return 0;
    if (getFirstIndex(a + 1, size - 1, num) == -1)
        return -1;
    return getFirstIndex(a + 1, size - 1, num) + 1;
}

int main()
{
    int arr[] = {1, 3, 4, 23, 34, 23, 434, 23, 43, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter a number to search: ";
    cin >> num;
    // cout << getIndex(arr, size, num, 0);
    cout << getFirstIndex(arr, size, num);
    return 0;
}