#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    string ram, ravan;
    cin >> ram >> ravan;
    int i = 0, j = 0;
    int s = min(m, n) * 2;
    int t = max(m, n);
    for (int g = 0; g < s; g++)
    {
        if (ram[i] >= ravan[j])
        {
            cout << ravan[j];
            j++;
        }
        else
        {
            cout << ram[i];
            i++;
        }
    }
    for (int k = s / 2; k <t; k++)
    {
        if (m > n)
            cout << ram[k];
        else
            cout << ravan[k];
    }
    return 0;
}