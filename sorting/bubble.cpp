#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
            }
        }
    }
}

int main()

{

    int ar[] = {5, 4, 3, 2, 1};

    bubble_sort(ar, 5);
    cout << "The sorted array is : \n";

    for (int i = 0; i < 5; i++)
    {
        cout << " "
             << ar[i];
    }

    return 0;
}