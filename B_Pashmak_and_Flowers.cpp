#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i;
    cin >> n;
    long long int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    long long int c1 = 1, c2 = 1;
    for (i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            c1++;
        else
            break;
    }
    for (i = 1; i < n; i++)
    {

        if (a[n - i - 1] == a[n - i])
            c2++;
        else
            break;
    }
    // cout << a[n - 1] - a[0] << " " << c1 * c2 << endl;
    long long int sum = 0;
    if (a[0] == b[0])
    {
        for (i = 1; i < n; i++)
            sum = sum + i;
        cout << 0 << " " << sum;
    }
    else
        cout << b[0] - a[0] << " " << c1 * c2 << endl;
    return 0;
}