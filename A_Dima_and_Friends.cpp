#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum = sum + a;
    }
    n = n + 1;
    for (int i = 1; i < 6; i++)
    {
        sum++;

        if (sum % n == 0)
        {
            cout << i;

            
            exit(0);
        }
    }
    return 0;
}