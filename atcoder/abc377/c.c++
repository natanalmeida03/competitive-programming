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

int main() { _
    ll n, m; cin >> n >> m;
    vector<ii> mov = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
    vector<ii> p;

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b; a--; b--;
        for(int j = 0; j < 8; j++){
            auto [x, y] = mov[j];
            x += a; y += b;
            if (min(x, y) < 0 or n <= max(x, y)) continue;
            p.push_back({x, y});
        }
        p.push_back({a, b});
    }

    p.push_back({-1, -1});
    sort(all(p));
    ll ans = n*n;
    for(int i = 1; i < p.size(); i++){
        if (p[i] != p[i - 1]) ans--;
    }

    cout << ans << endl;
    return 0;
}