#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = k - 1;
    if (a[count] == 0)
    {
        cout << "0";
        exit(0);
    }
    while (a[count] == a[count + 1])
    {
        count++;
    }
    cout << count + 1;
    return 0;
}