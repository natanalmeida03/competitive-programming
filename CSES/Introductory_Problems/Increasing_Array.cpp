#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ll n, aux, res = 0;
    cin >> n >> aux;

    for(int i = 1; i < n; i++)
    {
        ll x, a = 0; cin >> x;
        if(x < aux)
        {
            a = aux - x;
            res += a;
        }

        aux = x + a;
    }

    cout << res << " \n";

    return 0;
}