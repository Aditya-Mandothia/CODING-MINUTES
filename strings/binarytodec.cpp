#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();
    int base = 1;
    int dec_num = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            dec_num = dec_num + base;
            base = base * 2;
        }
    }

    cout << "THE DECIMAL VALUE OF THE BINARY NUMBER IS : ";
    cout << dec_num;

    return 0;
}