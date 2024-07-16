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
    vector<int> v;

    int m = 1;
    while(n){
        int a = n%10;
        n /= 10;

        if(a == 0) {
            m *= 10;
            continue;
        }

        v.eb(a * m);
        m *= 10;
    }

    cout << v.size() << endl;;

    for(auto &c : v) cout << c << " ";
    cout << endl;
}

int main() { _

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}