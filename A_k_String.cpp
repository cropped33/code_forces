#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, j = 0, l[26];
    cin >> k;
    string s, t;
    cin >> s;
    sort(s.begin(), s.end());
    t[0] = s[0];
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == t[j])
        {
            l[j]++;
        }
        else
            j++;
    }
    for (int i = 0; i < j; i++)
    {
        if (l[i] % k != 0)
            cout << -1;
        exit(0);
    }
    cout << "YES";
    return 0;
}