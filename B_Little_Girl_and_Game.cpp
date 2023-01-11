#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c[s.size()] = {0}, count = 0, j = 0;
    sort(s.begin(), s.end());
    // cout << s;
    for (int i = 1; i <= s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            c[j]++;
            continue;
        }
        else
        {

            if (c[j] == 0 || c[j] % 2 != 0)
                count++;
            j++;
        }
    }
    // count--;
    cout << count << endl;
    if (count != 0 && count % 2 == 0)
        cout << "First";
    else
        cout << "Second";
    return 0;
}