#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int main() { _
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        int m = 0, p = 0;

        vector<int> v;
        for(int i = 0; i < k; i++){
            int a; cin >> a; v.eb(a);
            if(m == 0 or m < a) m = a, p = i;
        }

        ll ans = 0;
        for(int i = 0; i < k; i++){
            if(i == p) continue;

            if(v[i] == 1) ans++;
            else ans += (2*v[i]) - 1;
        }

        cout << ans << endl;
    }
    return 0;
}