#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5] = {}, b;

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            b = a[i - 1][j] + a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i][j - 1];
            if (b % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}