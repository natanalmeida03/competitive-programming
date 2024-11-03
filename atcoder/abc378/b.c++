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
#define so(x) sort(x.begin(), x.end())
#define rso(x) sort(x.rbegin(), x.rend())

int main() { _
    int n; cin >> n;
    vector<ii> qr(n);
    for(auto &[q, r] : qr) cin >> q >> r;

    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int t, d; cin >> t >> d; t--;
        auto [q, r] = qr[t];
        
        int x = d % q;
        int ans = r - x;
        if (ans < 0) {
            ans += q;
        }
        cout << d + ans << '\n';
    }
    return 0;
}