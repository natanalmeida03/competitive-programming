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
    string n; cin >> n;

    stack<char> s;
    for(auto &c : n){
        if(s.empty()){
            if(c == ')'){
                cout << "No\n";
                return;
            }
            s.push(c);
        }

        if(c == ')'){
            if(s.top() != ')'){
                s.pop();
            }

            s.push(c);
        }

        s.push(c);
    }
}

int main() { _
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}