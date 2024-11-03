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
#define so(x) sort(x.begin(), x.end())
#define rso(x) sort(x.rbegin(), x.rend())

int main() { _
    vector<int> v(4, 0);
    int ans = 0;
    for(int i = 0; i < 4; i++){
        int a; cin >> a;
        v[a]++;
        if(v[a] == 2){
            ans++;
            v[a] = 0;
        }
    }

    cout << ans << endl;

    return 0;
}