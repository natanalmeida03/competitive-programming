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
    string s, t; cin >> s >> t;

    int ts = s.size(), tt = t.size();

    ll g = ts*(tt/__gcd(ts, tt));

    string ns = "\0", nt = "\0";
    for(int i = 1; i <= g/ts; i++){
        ns += s;
    }
    for(int i = 1; i <= g/tt; i++){
        nt += t;
    }

    int x = 100;
    string xs = ns, xt = nt;
    while(x--){
        if(xs == xt){
            cout << xs << endl;
            return;
        }

        xs += ns;
        xt += nt;
    }

    cout << -1 << endl;
}

int main() { _
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}