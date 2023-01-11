#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c[5] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h')
            c[0]++;
        if (c[0] > 0 && s[i] == 'e')
            c[1]++;
        if (c[1] > 0 && s[i] == 'l')
            c[2]++;
        if (c[2] > 1 && s[i] == 'o')
            c[3]++;
           }
    // for (int i = 0; i < 4; i++)
    //     cout << c[i] << endl;
    if (c[3] > 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}