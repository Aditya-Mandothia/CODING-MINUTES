#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int *arr, int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int current = arr[i];
        int prev = i - 1;

        while (prev >= 0 and arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }

        arr[prev + 1] = current;
    }
}

int main()
{

    int arr[] = {5, 4, 3, 1};

    int n = sizeof(arr) / sizeof(int);

    insertion_sort(arr, n);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}