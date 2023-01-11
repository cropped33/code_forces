#include <bits/stdc++.h>
using namespace std;

int b[100000];
int main()
{


       int n;
    long long x = 0, y = 0;
    cin >> n  ;
    int a;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        b[a] = i;
    }
    int m;
    cin >> m;
    while (m--)
    {
        cin >> a;
        x = x + b[a];
        y = y + (n - b[a] + 1);
    }
    cout << x << " " << y << endl;
    return 0;
}