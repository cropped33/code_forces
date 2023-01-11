#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p, q = "HQ9+";
    int count = 0;
    cin >> p;
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = 0; j < 3; j++)
            if (p[i] == q[j])
                count++;
    }
    if (count > 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}