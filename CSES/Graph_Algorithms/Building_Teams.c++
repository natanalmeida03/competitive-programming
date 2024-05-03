#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()

const int MAX = 1e5+10;

vector<vector<int>> g(MAX);
vector<int> p(MAX);

bool bfs(int x){
     queue<int> q;
     q.push(x);
     p[x] = 1;

     while(!q.empty()){
          int v = q.front();q.pop();

          for(auto u : g[v]){
               if(p[u] == 0){
                    p[u] = 3 - p[v];
                    q.push(u);
               } else if(p[u] == p[v])
                    return false;
          }
     }

     return 1;
}

bool is_bipartite(int N)
{
     for (int u = 0; u < N; ++u)
          if (p[u] == 0 and !bfs(u))
               return false;

     return true;
}

int main() { _
     int n, m; cin >> n >> m;

     for(int i = 0;  i < m; i++){
          int a, b; cin >> a >> b; a--;b--;
          g[a].emplace_back(b);
          g[b].emplace_back(a);
     }


     bool v = is_bipartite(n);

     if(!v)
          cout << "IMPOSSIBLE";
     else
          for(int i = 0; i < n; i++) 
               cout << p[i] << " ";
     
     cout << endl;
     return 0;
}