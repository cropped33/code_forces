#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int count = 0;
    for (int i = 5; i > 0; i--)
    {
        count = count + x / i;
        x = x % i;
    }
    cout << count;
    return 0;
}