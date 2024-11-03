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

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;
int n, k;
vector<int> h;
int memo[MAX];

int dp(int i){
    if(i == 0) return 0;
    if(memo[i] != -1) return memo[i];

    int ret = INF;
    for(int j = max(0, i-k); j < i; j++)
        ret = min(ret, dp(j) + abs(h[j] - h[i]));

    return memo[i] = ret;
}

int main() { _
    cin >> n >> k;
    h.resize(n);
    for(auto &c: h) cin >> c;

    memset(memo, -1, sizeof memo);

    cout << dp(n-1) << endl;
    return 0;
}