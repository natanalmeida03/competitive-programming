#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define f first
#define s second

int main() { _

    int t; cin >> t;
    while(t--){
        ll n, s, t; cin >> n >> s >> t;
        auto men = min(s, t);

        ll ans = 1 + n - men;

        cout << ans << endl;
    }

    return 0;
}