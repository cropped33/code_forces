#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int count = 0, n[4];
    for (int i = 0; i < 4; i++)
        cin >> n[i];
    sort(n, n + 4);
    for (int i = 0; i < 3; i++)
    {
        if (n[i] == n[i + 1])
            count++;
    }
    cout << count;
    return 0;
}