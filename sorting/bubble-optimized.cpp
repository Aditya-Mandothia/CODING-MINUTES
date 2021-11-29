#include <bits/stdc++.h>

using namespace std;

void bubble_opt(int *ar, int n)
{
    bool swapped;
    int i,j;

    for (i = 0; i < n; i++)
    {
        swapped = false;

        for (j = 0; j < n - 1 - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
                swapped = true;
            }

            if (swapped == false)
            {
                break;
            }
        }
    }
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5};

    bubble_opt(ar, 5);

    for(int k=0;k<5;k++)
    {
        cout<<" "<<ar[k];
    }

    return 0;
}