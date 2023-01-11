#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, max = 0, ans = 0;
    while (n--)
    {
        cin >> i >> j;
        max = max - i + j;
        if (max > ans)
            ans = max;
    }
    cout << ans;
    return 0;
}