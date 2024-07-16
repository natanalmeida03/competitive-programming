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

const int MAX = 1e6;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> r(MAX);

void bfs(int x){
    
    stack<int> s;
    vector<int> h;
    s.push(x);
    vis[x] = 1;

    while(!s.empty()){
        auto v = s.top();
        s.pop();

        h.eb(v);

        for(auto u : g[v])
            if(!vis[u]){
                s.push(u);
                vis[u] = 1;
           }
    }
    // cout << "for i = " << x+1 << " possui um res = " << res << "\n";
    for(auto u : h){
        r[u] = h.size();
    }
}

int main() { _
    int n, m; cin >> n >> m;

    for(int i = 0; i < m; i++){
        int x, oldVal = -1; cin >> x;
        for(int j = 0; j < x; j++){
            int newVal; cin >> newVal;
            --newVal;
            if(oldVal != -1) {
                g[newVal].eb(oldVal);
                g[oldVal].eb(newVal);
            }
            oldVal = newVal;
        }   
    }

    for(int i = 0; i < n; i++)
        if(!vis[i])
            bfs(i);
     
    for(int i = 0; i < n; ++i)
        cout << r[i] << " "; 

    cout << endl;
    return 0;
}