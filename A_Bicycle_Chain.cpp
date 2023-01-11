#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, max = 0, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        for (int j = 0; j < n; j++)
        {
            if (b[i] % a[j] == 0)
            {
                if (b[i] / a[j] > max)
                {
                    max = b[i] / a[j];
                    count = 1;
                }
                else if (b[i] / a[j] == max)
                    count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}