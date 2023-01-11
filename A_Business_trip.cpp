#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, a[12], sum = 0, count = 0;
    cin >> k;
    if (k == 0)
    {
        cout << 0;
        exit(0);
    }
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12, greater<int>());
    for (int i = 0; i < 12; i++)
    {
        sum = sum + a[i];
        count++;
        if (sum >= k)
        {
            cout
                << count;
            exit(0);
        }
    }
    cout << -1;
    return 0;
}