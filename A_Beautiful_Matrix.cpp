#include <bits/stdc++.h>
using namespace std;
int main()
{
    int f, i, j;
    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            cin >> f;
            if (f == 1)
            {
                i = abs(2 - a);
                j = abs(2 - b);
                cout << i + j;
            }
        }
    }
    return 0;
}