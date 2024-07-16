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

        ll m = k/n, ans = k;
        int v = m;
        while(m != 0){
            ans += m;
            if(ans/n == v) break;

            v = ans/n;
            m = v - m;  
        }

        cout << ans << endl;
    }
    return 0;
}