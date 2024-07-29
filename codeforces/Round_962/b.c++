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
    int n, k; cin >> n >> k;

    vector<string> v;
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        v.eb(x);
    }

    int p = 0;
    for(int i = 0; i < n; i+= k){
        while(p < n){
            if(v[i][p] == '0'){
                cout << 0;
            }
            else{
                cout << 1;
            }

            p+= k;
        }
        p=0;
        cout << endl;
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