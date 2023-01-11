// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m, count = 0, ans = 0, i = 0;
//     cin >> n >> m;
//     int l = n * m;
//     string a;
//     while (n--)
//     {
//         cin >> a;

//         for (int i = 0; i < m; i++)
//         {
//             if (a[i] == '.')
//             {
//                 count++;
//                 a[i] = 'B';
//                 if (a[i - 1] == 'B')
//                     cout << "W";
//                 else
//                     cout << "B";
//                 // if (ans == 0)
//                 // {
//                 //     cout << "B";
//                 //     ans++;
//                 // }
//                 // else
//                 // {
//                 //     cout << "W";
//                 //     ans--;
//                 // }
//             }
//             else
//                 cout << '-';
//         }

//         cout << endl;
//         if (count == 0)
//             ans = 0;
//         else
//         {
//             if (ans == 0)
//                 ans++;
//             else
//                 ans--;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> table;
int main()
{
    int n, m, count = 0, ans = 0, i = 0;
    cin >> n >> m;
    int l = n * m;
    string a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            if (a == ".")
                table[i][j] = 'B';
            else
                table[i][j] = '-';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << table[i][j];
        }
    }

    return 0;
}