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

int n, k;
void solve(vi& ans, vi& v, int p){
    if (p == n) {
        int sum = 0;
        if (accumulate(all(ans),sum)%k == 0) {
            for (int i = 0; i < n; ++i) 
                cout << ans[i] << " ";
            cout << endl;
        }
        return;
    }
    
    for (int i = 1; i <= v[p]; ++i) {
        ans[p] = i;
        solve(ans, v, p + 1);
    }
}
int main() { _
    cin >> n >> k;
    vi v;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.eb(a);
    } 

    vi ans(n);
    solve(ans, v, 0);
    
    return 0;
}