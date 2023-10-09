#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;

    cin >> n;

    while(n--)
    {
        int a, b, c, res = 0;

        cin >> a >> b >> c;

        res = abs(7 - a) + abs(7 - b) + abs(7 - c);

        return cout << res << "\n", 0;
    }
}