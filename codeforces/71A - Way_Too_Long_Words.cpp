#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n = 0;

    cin >> n;

    string p[n+1], t[n+1];

    for(int i = 0; i < n; ++i)
    {
        cin >> p[i];

        if(p[i].length() > 10)
        {
            t[i] = p[i][0] + to_string(p[i].length() - 2) + p[i][p[i].length() - 1];
        }
        else
        {
            t[i] = p[i];
        }
    }

    for(auto i: t)
        cout << i << "\n";
}