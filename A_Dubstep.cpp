#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i++;
            i++;
            count++;
            continue;
        }
        if (count > 0)
        {
            cout << " ";
            count = 0;
        }
        cout << s[i];
    }
    return 0;
}