#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()

const int MAX = 1e6+10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

vector<int> c;

int n, m;

void bfs(int x){
     queue<int> q;
     q.push(x);
     vis[x] = 1;
     pai[x] = x;

     while(!q.empty()){
          int v = q.front(); 
          q.pop();
          for(auto u : g[v]){
               if(!vis[u]){
                    q.push(u); 
                    vis[u] = 1;
                    pai[u] = v;
               }
          }
     }
}

vector<int> cam(int x){
     vector<int> aux;

     if(!vis[x]) return aux;

     aux.emplace_back(x);
     while(pai[x] != x){
          x = pai[x];
          aux.emplace_back(x);
     }

     return aux;
}

int main() { _
     cin >> n >> m;

     for(int i = 0; i < m; i++){
          int a, b; cin >> a >> b; a--; b--;
          g[a].emplace_back(b);
          g[b].emplace_back(a);
     }

     bfs(0);
     vector<int> ans = cam(n-1);

     if(ans.size() == 0)
          cout << "IMPOSSIBLE" << endl;
     else{
          cout << ans.size() << endl;
          reverse(all(ans));
          for(auto &c : ans) cout << c+1 << " ";
          cout << endl;
     }
     return 0;
}