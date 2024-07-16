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
    int n; cin >> n;
    map<int, int> m;

    ll ans = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        a -= i;

        ans += m[a];
        m[a]++;
    }

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