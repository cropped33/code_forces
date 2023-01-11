#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if (w == 2)
    {
        cout << "NO";
        exit(0);
    }
    if (w % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}