#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, count = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        if (i > a && (n - i) <= b)
            count++;
    }
    cout << count;
}
// >a&<b