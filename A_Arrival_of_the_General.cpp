#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0], max = a[0], x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            x = i;
        }
        if (a[i] <= min)
        {
            min = a[i];
            y = i + 1;
        }
    }
    // cout << x << endl;
    // cout << y << endl;
    int ans = x + (n - y);
    // if (x == 0 && y == n)
    //     cout << 0;
    if (x - y < 0)
        cout << ans;
    else
        cout << ans - 1;
    return 0;
}