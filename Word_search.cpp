#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, column, count = 0, sum = 0,a,b;
    cin >> row >> column;
    char m[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> m[i][j];
        }
    }
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (m[i][j] == s[0])
            {
                a = i;
                b = j + 1;
                for (int k = 1; k < l; k++)
                {
                    if (m[a][b] == s[k])
                    {
                        sum++;
                        b++;
                    }
                    if (sum == l)
                    {
                        count++;
                        sum = 0;
                    }
                }
                sum=1;
                a = i + 1;
                b = j;
                for (int k = 1; k < l; k++)
                {
                    if (m[a][b] == s[k])
                    {
                        sum++;
                        a++;
                    }
                    if (sum == l)
                    {
                        count++;
                        sum = 1;
                    }
                }
            }
        }
    }
    cout << count;
    return 0;
}