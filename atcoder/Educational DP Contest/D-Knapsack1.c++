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

const ll LINF = 0x3f3f3f3f3f3f3f3f;


int n, w;
vector<ii> h;
ll memo[101][100010];

ll dp(int i, int j){
    if(j < 0) return -LINF;
    if(i == n) return 0;

    ll &p = memo[i][j];
    if(p != -1) return p;

    auto [x, y] = h[i];
    return p = max(dp(i+1, j), dp(i+1, j-x)+y);
}

int main() { _
    cin >> n >> w;
    h.resize(n);
    for(auto &[x, y] : h) cin >> x >> y;

    memset(memo, -1, sizeof memo);

    cout << dp(0, w) << endl;
    return 0;
}