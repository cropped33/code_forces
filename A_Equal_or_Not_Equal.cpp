#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (t--)
    {
        string s = "";
        cin >> s;
        
        for (int i = 1; i < sizeof(s) - 1; i++)
        {
            if (s[i] == 'N' && s[i + 1] == 'E')
            {
                cout << "NO"<<endl;
                exit(0);
            }
        }
        cout << "YES"<<endl;
    }
    return 0;
}