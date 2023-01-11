#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, c1 = 0, c2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 100)
            c1++;
        else
            c2++;
    }
    if (c1 == 0)
    {
        if (c2 % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
        exit(0);
    }
    if (c1 % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}