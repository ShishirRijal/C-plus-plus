#include <iostream>
using namespace std;

int compare(int a, int b)
{
    return a - b;
}

void sort(int a[], int n, int (*com)(int, int))
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (com(a[i], a[j]) > 0)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int nums[] = {2, 34, 23, 3, 42, 13, 33, 43};
    int size = sizeof(nums) / sizeof(nums[0]);
    sort(nums, size, compare);
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}