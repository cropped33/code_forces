#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    long int a, min = 1000000000, ans = 0, min1;
    if (n == 1)
        {cout << 1;
    exit(0);}
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a == min)
        {
            count++;
            // if (min1 != min)
            //     count = 0;
            // min1 = min;
        }
        if (a < min)
        {
            ans = i;
            min = a;
            count = 0;
        }
        // cout << count << endl;
    }
    if (count > 0)
        cout << "Still Rozdil";
    else
        cout << ans;
    return 0;
}