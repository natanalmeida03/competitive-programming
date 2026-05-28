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
        int n, m; cin >> n >> m;
        vector<int> v(n);
        int sum = 0;
        for(auto &c : v) {
            cin >> c;
            sum += c;
        }

        cout << ((sum != m)?("NO"):("YES")) << endl;

    }
    return 0;
}