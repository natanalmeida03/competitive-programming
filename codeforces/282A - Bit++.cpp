#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0;
    string a;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;

        if (a == "X++" or a == "++X")
            x++;
        else
            x--;
    }

    cout << x << "\n";
}