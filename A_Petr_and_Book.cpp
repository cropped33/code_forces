#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j = 1, a[7];
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    while (1)
    {
        if (j == 8)
            j = 1;
        n = n - a[j - 1];
        if (n <= 0)
        {
            cout << j;
            break;
        }
        j++;
    }
    return 0;
}