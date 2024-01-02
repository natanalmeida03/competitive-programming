#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;
    bitset<10000001> x;

    for(int i = 1; i < n; i++)
    {
        ll a;
        cin >> a;
        x[a] = true;
    }

    for(int i = 1; i <= n; i++)
    {
        if(!x[i])
        {
            cout << i << "\n";
            return 0;    
        }
    }

}