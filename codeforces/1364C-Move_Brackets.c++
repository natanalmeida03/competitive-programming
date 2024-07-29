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
    string s; cin >> s;

    int a = 0, f = 0;
    for(auto &c : s){
        if(c == '(') a++;
        else{
            if(a) a--;
            else f++;
        }
    }

    cout << f << endl;
}

int main() { _
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}