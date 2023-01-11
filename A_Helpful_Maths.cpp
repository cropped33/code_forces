#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            a++;
        else if (s[i] == '2')
            b++;
        else if (s[i] == '3')
            c++;
    }
    int j = 0;
    // cout << a << b << c;
    for (int i = 0; i < a; i++)
    {
        s[j] = '1';
        j++;
        s[j] = '+';
        j++;
    }
    for (int i = 0; i < b; i++)
    {
        s[j] = '2';
        j++;
        s[j] = '+';
        j++;
    }
    for (int i = 0; i < c; i++)
    {
        s[j] = '3';
        j++;
        s[j] = '+';
        j++;
    }
    cout << s;
    return 0;
}