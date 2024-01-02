#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main ()
{
    ll n, k, q, a;

    cin >> n >> k >> q;

    vector<ll> b(n, k);

    for(int i = 1; i <= q; ++i)
    {
        cin >> a;
        b[a-1]+= 1;
    }

    for(auto i : b)
    {
        if(i - q <= 0)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}