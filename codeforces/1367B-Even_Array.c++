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

    int p = 0, imp = 0, par = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a % 2 == 0 and p == 1) par++;
        else if(a % 2 == 1 and p == 0) imp++;
        p = 1 - p;
    }

    if(imp == par) cout << par << endl;
    else cout << -1 << endl;
}

int main() { _
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}