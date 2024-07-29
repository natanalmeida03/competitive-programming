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

}

int main() { _
    int n, t, p; cin >> n >> t >> p;

    vector<int> v;
    for(int i = 0;i < n; i++){
        int a; cin >> a;
        v.eb(a);
    }

    sort(all(v));
    reverse(all(v));

    cout << max(t - v[p-1], 0) << endl;
    return 0;
}