#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, b, count = 1, max = 0, ans;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        while ((float)b / m > 1)
        {
            b = b - m;
            count++;
        }
        if (count >= max)
        {
            ans = i + 1;
            max = count;
        }
        count = 1;
    }
    cout << ans;
    return 0;
}