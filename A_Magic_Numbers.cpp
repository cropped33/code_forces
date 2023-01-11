#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int i = 0;
    while (i < a.size())
    {
        if (a[i] == '1')
        {
            i++;
            if (a[i] == '4')
            {
                i++;
                if (a[i] == '4')
                {
                    i++;
                }
                else
                    continue;
            }
            else
                continue;
        }
        else
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}