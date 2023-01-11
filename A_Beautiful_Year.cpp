#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<int> s1;
    while (1)
    {
        int t = stoi(s);
        t++;
        s = to_string(t);
        for (int i = 0; i < s.size(); i++)
        {
            s1.insert((int)s[i]);
        }
        if (s1.size() == s.size())
        {
            cout << s;
            break;
        }
        s1.clear();
    }
    return 0;
}