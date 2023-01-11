#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, count = 0;
        cin >> a >> b >> c;
        int m;
        m = (a + c) / (2 * b);
        int b1 = b * m;

        if (m > 0 && (a - b1 == b1 - c))
            count++;

        m = (2 * b - c) / a;
        int a1 = a * m;

        if (m > 0 && (a1 - b == b - c))
            count++;

        m = (2 * b - a) / c;
        int c1 = c * m;

        if (m > 0 && (a - b == b - c1))
            count++;

        if (count == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}