#include <bits/stdc++.h>
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
    int min = abs(a[n - 1] - a[0]);
    int x = 1, y = n;
    for (int i = 0; i < n-1; i++)
    {
        int dif = abs(a[i + 1] - a[i]);
        if (dif < min)
        {
            x = i + 1;
            y = i + 2;
            min = dif;
        }

    }
    cout << x << " " << y << endl;
    return 0;
}