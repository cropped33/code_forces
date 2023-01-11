#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] * 20 - b[i] * 10;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (c[i] > sum)
                sum = c[i];
        }
        if (sum > 0)
            cout << sum << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}