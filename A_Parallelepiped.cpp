#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double x = sqrt(a * b / c);
    double y = sqrt(c * a / b);
    double z = sqrt(c * b / a);
    cout << (x + y + z) * 4;
    return 0;
}