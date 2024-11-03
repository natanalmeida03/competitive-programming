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

const int MAX = 1e5+10;
int h[MAX];
int dp[MAX];

int solve(int i){
    if(i == 0) return 0;
    if(dp[i] != -1) return dp[i];

    int c = INT_MAX;
    c = min(c, solve(i-1) + abs(h[i] - h[i-1]));

    if(i > 1)
        c = min(c, solve(i-2) + abs(h[i] - h[i-2]));

    return dp[i] = c;
}
int main() { _
    memset(dp, -1, sizeof(dp));
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        h[i] = a;
    }

    int ans = solve(n-1);
    cout << ans << endl;
    return 0;
}