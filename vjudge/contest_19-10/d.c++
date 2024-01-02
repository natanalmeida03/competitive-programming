#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main ()
{
    ll n, m, a, res = 0, aux = 0, c = 0;

    cin >> n >> m;

    vector<ll> b(n+1, 0);

    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        b[i] = a;
    }

    sort(b.begin(), b.end());

    while(c != m)
    {
        while((b[n-aux] > b[n-aux-1]) and c != m)
        {
            cout << b[n - aux] << " -- " <<  b[n-aux-1] << "\n";
            b[n - aux] /= 2;
            c++;
        }
        aux++;
    }

    for(auto i : b)
        res += i;

    cout << res << "\n";
}