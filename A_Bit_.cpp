#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0, n;
    string a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == "++X" || a == "X++")
            x++;
        else
            x--;
    }
    cout << x;
    return 0;
}