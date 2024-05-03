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
vector<int> vis(MAX, 0);
vector<int> c;

void bfs(int x){
     queue<int> q;
     q.push(x);
     vis[x] = 1;

     int v;
     while(!q.empty()){
          v = q.front();
          q.pop();

          for(auto u : g[v])
               if(!vis[u]){
                    q.push(u);
                    vis[u] = 1;
               }
     }

     c.emplace_back(v);
}
int main() { _
     int n, m; cin >> n >> m;

     for(int i = 0; i < m; i++){
          int a, b; cin >> a >> b; a--; b--;
          g[a].emplace_back(b);
          g[b].emplace_back(a);
     }

     int ans = 0;
     for(int i = 0; i < n; i++){
          if(!vis[i]){
               bfs(i);
               ans++;
          }
     }


     if(ans == 1)
          cout << 0 << endl;
     else{
          cout << ans - 1 << endl;
          for(int i = 1; i < ans; i++){
               cout << c[i-1]+1 << " " << c[i]+1 << endl;
          }
     }
     return 0;
}