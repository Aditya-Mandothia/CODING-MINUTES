#include <bits/stdc++.h>

using namespace std;

// void printarr(int arr[])
// {
//     int n = sizeof(arr)/sizeof(int);
//     cout<<"IN FUNCTION\n";

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

// string linearsearch(int *arr, int n, int key)
// {

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return "Found";
//         }
//     }

//     return "Not found";
// }

// int binary_search(int *arr, int n, int key)
// {
//     int s = 0;
//     int e = n - 1;


//     while (s <= e)
//     {
//         int mid = (s + e) / 2;

//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }

//     return -1;
// }

int main()
{

    //DOUBT 1

    // string fruits[4] = {"apple","banana","santra"};
    // cout<<fruits[3];
    // cout<<"\n kuch nhi aaya agar main aaya toh";

    //DOUBT 2
    int arr[] = {12,34,56,78,90,111};

    int n = sizeof(arr) / sizeof(int);
    int key;

    // cout<<"IN MAIN FUNCTION\n";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<"\n";
    // }

    // printarr(arr);

    //LINEAR SEARCH

    // cin >> key;
    // cout << linearsearch(arr, n, key);

    //BINARY SEARCH
    // cin >> key;
    // cout << binary_search(arr, n, key);

    return 0;
}