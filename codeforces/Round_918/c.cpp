#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

bool isInt(double value) {
    return floor(value) == value;
}

int main() {
    ll t; cin >> t;

    while(t--)
    {
        ll sum = 0;
        ll n; cin >> n;
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            sum += a;
        }

        double ra = sqrt(sum);

        if(isInt(ra))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}