#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ii pair<int, int>
#define vi vector<int>
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

void solve() {
    int a, b; cin >> a >> b;

    int dif = 0;
    if(a < b) dif = (b-a);
    else dif = a-b;

    ll ans = 0;

    ans += dif/10;

    if(dif - (ans*10) != 0) ans++;

    cout << ans << endl;
}

int main() { _
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}