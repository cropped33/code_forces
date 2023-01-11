#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);
    int res = m - n + 1;
    int i = 0;
    int dif = a[n - 1] - a[0];
    while (res > 0)
    // for (int i = 0; i < n; i++)
    {
        if ((a[i + n - 1] - a[i]) < dif)
        {
            dif = a[i + n - 1] - a[i];
        }

        // cout << a[i + n - 1] << "     " << a[i] << endl;

        // dif[i - 1] = a[i] - a[i - 1];
        // for (int j = i; j < n; j++)
        // {
        //     int z = a[j] - a[j - 1];
        //     if (z < dif[i - 1])
        //         dif[i - 1] = z;
        // }
        res--;
        i++;
    }
    // sort(dif, dif + n);
    // for (int j = 0; j != i; j++)
    //     cout << dif[j] << endl;
    cout << dif;
    return 0;
}