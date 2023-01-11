#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        sort(w, w + n);
        int sum1 = 0, sum2 = 0, dif;
        for (int i = 0; i < k; i++)
            sum1 = sum1 + w[i];

        for (int i = k; i < n; i++)
            sum2 = sum2 + w[i];

        dif = sum2 - sum1;
        cout << dif << endl;
    }
    return 0;
}