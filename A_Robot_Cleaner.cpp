#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (n--)
    {
        int n, m, rb, cb, rd, cd, count = 0, w = 1, x = 1, a, b;
        cin >> n >> m >> rb >> cb >> rd >> cd;
        a = rb;
        b = cb;
        while (0)
        {
            if (rb == rd || cb == cd)
            {
                cout << count << endl;
                break;
            }

            else
                count++;
            a++;
            b++;
            if (a == n)
            {
                w++;
                a = 0;
            }
            if (b == m)
            {
                x++;
                b = 0;
            }
            if (w % 2 != 0)
                rb++;
            else
                rb--;
            if (x % 2 != 0)
                cb++;
            else
                cb--;
        }
    }
    return 0;
}