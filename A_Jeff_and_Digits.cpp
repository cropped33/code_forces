#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], c0 = 0, c5 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            c0++;
        else
            c5++;
    }
    c5 = floor(c5 / 9) * 9;
    if (c0 == 0)
        cout
            << -1;
    else if (c5 == 0)
        cout
            << 0;
    else
    {
        while (c5--)
            cout << 5;
        while (c0--)
            cout << 0;
    }
    return 0;
}