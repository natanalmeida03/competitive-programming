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

int n;
vector<vector<int>> h(MAX, vector<int>(3));
vector<vector<int>> memo(MAX, vector<int>(3, -1));

int dp(int i, int p = -1){
    if(i < 0) return 0;
    if (memo[i][p] != -1) return memo[i][p];

    int ret = 0;
    for(int j = 0; j < 3; j++){
        if(j == p) continue;
        ret = max(ret, h[i][j] + dp(i-1, j));
    }
    
    return  memo[i][p] = ret;
}

int main() { _
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        h[i][0] = a;
        h[i][1] = b;
        h[i][2] = c;
    }

    int ans = max({dp(n - 1, 0), dp(n - 1, 1), dp(n - 1, 2)});
    cout << ans << endl;
    return 0;
}