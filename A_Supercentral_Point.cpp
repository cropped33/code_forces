#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        int w = 0, x = 0, y = 0, z = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j] && b[i] > b[j])
                w = 1;
            if (a[i] == a[j] && b[i] < b[j])
                x = 1;
            if (b[i] == b[j] && a[i] > a[j])
                y = 1;
            if (b[i] == b[j] && a[i] < a[j])
                z = 1;
        }
        if (w + x + y + z == 4)
            count++;
    }
    cout << count;
    return 0;
}