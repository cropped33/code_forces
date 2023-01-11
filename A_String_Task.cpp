#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char a = tolower(s[i]);
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y')
            continue;
        else
            cout << "." << a;
    }
    return 0;
}