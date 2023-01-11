#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    // int a = n;
    if (n % 2 != 0)
        n = n + 1;
    // for (int i = 0; i < n; i++)
    // {
    if (k <= n / 2)
        cout << 2 * k - 1;
    else
    {
        k = k - n / 2;
        cout << k * 2;
    }
    // }
    return 0;
}