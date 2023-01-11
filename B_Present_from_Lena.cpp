#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l = 0, j;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        int sum = n * 2 - 2 * i;
        while (sum > 0)
        {
            cout << " ";
            sum--;
        }
        for (j = 0; j <= l; j++)
        {
            if (l == 0)
                cout << j;
            else
                cout << j << " ";
        }

        for (j = j - 2; j >= 0; j--)
        {
            if (j == 0)
                cout << j;
            else
                cout << j << " ";
        }
        l++;
        cout << endl;
    }
    int count = 1, veja = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int sum = count * 2;
        count++;
        while (sum > 0)
        {
            cout << " ";
            sum--;
        }
        for (j = 0; j <= i; j++)
        {
            if (veja == n - 1)
                cout << j;
            else
                cout << j << " ";
        }
        for (int k = n - count; k >= 0; k--)
        {
            if (k == 0)
                cout << k;
            else
                cout << k << " ";
        }
        cout << endl;
        veja++;
    }
    return 0;
}