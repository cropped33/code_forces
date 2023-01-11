#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[m], b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + m);
    int max = 0, min = 0, j = 0, k = 0, l;
    l = n;
    while (n--)
    {
        sort(b, b + m, greater<int>());
        max = max + b[0];
        b[0]--;
    }
    while (l--)
    {

        min = min + a[k];
        a[k]--;
        if (a[k] == 0)
            k++;
    }
    cout << max << " " << min;
    return 0;
}