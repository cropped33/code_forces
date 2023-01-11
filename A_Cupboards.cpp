#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    int a, b, s1 = 0, s2 = 0, sum = 0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        s1 = s1 + a;
        s2 = s2 + b;
    }
    // cout << s1;
    // cout << s2;
    // cout << n / 2;
    if (s1 < n / 2)
        sum += s1;
    else
        sum += (n - s1);
    if (s2 < n / 2)
        sum += s2;
    else
        sum += (n - s2);
    cout << sum;
    return 0;
}