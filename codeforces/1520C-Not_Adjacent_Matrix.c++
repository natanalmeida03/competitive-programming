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
    vector<int> v(n*n);

    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(n == 2){
        cout << -1 << endl;
        return;
    }

    int p = 0;
    for(int i = 1; i <= n*n; i++){
        v[p] = i;

        p += 2;
        if(p >= n*n) p = 1;
    }

    p = 1;
    for(int i = 0; i < n*n; i++){
        cout << v[i] << " ";

        if(p == n){
            cout << endl;
            p = 0;
        }

        p++;

    }
}

int main() { _

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}