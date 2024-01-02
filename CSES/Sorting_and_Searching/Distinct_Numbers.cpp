#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {

    ll n;
    cin >> n;
    bitset<10000001> a;

    while(n--)
    {
        ll x;
        cin >> x;
        a.set(x);
    }

    cout << a.count() << "\n";
    return 0;
}