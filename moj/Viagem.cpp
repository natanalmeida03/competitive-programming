// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2022f2p2_viagem

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define fi first
#define se second

int MAX = 1e5+7;
vector<vector<pair<int, pair<int,int>>>> g(MAX);
bool vis[100007];

int ans = INT_MAX;


void dfs(int x, int y, int p, int c, int te){
   if(x == y){
      //cout << "CHEGUEI EM " << y << " | com moeda restante: " << te << " | tempo: " << c << endl;
      ans = min(ans, c);
      return;
   }

   vis[x] = true;

   for(int i = 0; i < g[x].size(); i++) {
      int viz = g[x][i].first;
      pair<int,int> d = g[x][i].second;
      if(!vis[viz] && te >= d.second) {
         dfs(viz, y, x, c + d.first, te - d.second);
      }
   }

   vis[x] = false; 
}

int main() { _

   int v, n, m; cin >> v >> n >> m;

   for(int i = 0; i < m; i++){
      int a, b, t, p; cin >> a >> b >> t >> p; a--; b--;
      g[a].push_back({b, {t, p}});
      g[b].push_back({a, {t, p}});
   }

   int ori, des; cin >> ori >> des; ori--; des--;

   dfs(ori, des, -1, 0, v);
   cout << (ans == INT_MAX ? -1 : ans) << endl;
   return 0;
}