#include <bits/stdc++.h>
using namespace std;
int main()
{
    string guest, host, pile, apd;
    int count = 0;
    cin >> guest >> host >> pile;
    apd = guest + host;
    sort(apd.begin(), apd.end());
    sort(pile.begin(), pile.end());
    if (apd.size() == pile.size())
    {
        for (int i = 0; i < apd.size(); i++)
        {
            if (apd[i] != pile[i])
                count++;
        }
    }
    else
    {
        count++;
    }
    if (count != 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}