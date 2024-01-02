#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ll n, aux, x, r, v = 0;
    cin >> n >> aux;

    for(int i=1; i<n; i++)
    {
        cin >> x;
        if(x < aux)
        {
            r = (aux - x) + 1;
            v = max(v, r);
        }

        aux = x;
    }

    cout << v << "\n";

    return 0;
}