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
    int n; cin >> n;
    int ans = 0;

    vector<int> bil = {100, 20, 10, 5, 1};
    int p = 0;

    while(n > 0){
        if(n >= bil[p]){
            n -= bil[p];
            ans++;
        }
        else
            p++;
    }

    cout << ans << endl;
    return 0;
}