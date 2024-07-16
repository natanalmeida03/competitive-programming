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

    int p = sqrt(n/2);
    if(n % 2 == 0 and p * p == n/2){
        cout << "YES\n";
        return;
    }

    p = sqrt(n/4);
    if(n % 4 == 0 and p * p == n/4){
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main() { _
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}