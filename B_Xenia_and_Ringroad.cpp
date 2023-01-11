#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int a, b, sum = 0, d = 1;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        b = a - d;
        if (b < 0)
            b = n - d + a;
        d = a;
        sum = sum + b;
    }
    cout << sum;
    return 0;
}