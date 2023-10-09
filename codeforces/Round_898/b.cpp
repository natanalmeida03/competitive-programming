#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main ()
{
    int t, n, a[10], aux, po;
    ll res;

    cin >> t;

    for(int i = 0; i < t; ++i)
    {
        aux = 10;
        res = 1;
        cin >> n;

        for(int j = 0; j < n; ++j)
        {
            cin >> a[j];

            if(a[j] < aux)
            {
                aux = a[j];
                po = j;
            }
        }

        aux++;

        for(int j = 0; j < n; ++j)
        {
            if(j != po)
            {
                res *= a[j];
            }
            else
            {
                res *= aux;
            }
        }

        cout << res << "\n";
    }

    return 0;
}