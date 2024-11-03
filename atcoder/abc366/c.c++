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

int main() { _
    int q; cin >> q;
    map<int, int> m;
    // set<int> s;
    vector<int> ans;
    int qtd = 0;
    for(int i = 0; i < q; i++){
        int a; cin >> a;
        int x;
        if(a == 1){
            cin >> x;
            m[x]++;
        }else if(a == 2){
            cin >> x;
            m[x]--;
            if(m[x] == 0)
                m.erase(x);
        }else if(a == 3){
            cout << m.size() << endl;
        }
    }

    // for(auto &c : ans) cout << c << endl;
    return 0;
}