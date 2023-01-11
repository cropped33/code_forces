#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            int a = i * i + j;
            int b = i + j * j;
            if (a == n && b == m)
                count++;
        }
    }
    cout << count;
    return 0;
}