#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main ()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; ++i)
    {
        ll n, x;
        float sum = 0;

        cin >> n >> x;

        float a[n];

        sum = x/n;

        for(ll j = 0; j < n; ++j)
        {
            cin >> a[j];

            sum += a[j]/n;
        }

        cout << sum << "\n";
    }
}