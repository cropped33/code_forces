#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = n + 1; i <= m; i++)
    {
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 0)
        {
            if (i == m)
                cout << "YES" << endl;
            else

                cout << "NO";
            exit(0);
        }
        count = 0;
    }
    cout << "NO" << endl;
    return 0;
}