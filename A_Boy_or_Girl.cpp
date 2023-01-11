#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = n;
    sort(s.begin(), s.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            count--;
    }
    if (count % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}