#include <bits/stdc++.h>

using namespace std;

void selection_sort(int *arr, int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int current = arr[i];
        int min_pos = i;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_pos])
                min_pos = j;
        }

        swap(arr[min_pos], arr[i]);
    }
}
int main()
{
    int arr[] = {5, 3, 1};
    int n = 3;

    selection_sort(arr, n);
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}