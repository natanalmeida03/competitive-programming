#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define nl '\n'
#define debug(x) cout << x << nl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define f first
#define s second

const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5+10;

vector<vector<pii>> g(MAX);
vector<ll> d(MAX, 0);

int dijkstra(int u, int w){
     d.clear();
     priority_queue <pii, vector<pii>, greater<pii>> q;
     q.push({0,u});
     d[u] = 0;

     while(!q.empty()){
          auto [dist, v] = q.top();
          q.pop();
          
          if(dist != d[v]) continue;

          if(v == w) return dist;

          for(auto [x, y]: g[v]){
               if(d[v] == 0 or d[v] + y < d[x]){
                    d[x] = d[v] + y;
                    q.push({d[x], x});
               }
          }
     }

     return -1;
}

int main() { _
     int n, m, q; cin >> n >> m >> q;

     for(int i = 0; i < m; i++){
          int a, b, p; cin >> a >> b >> p; a--; b--;
          g[a].eb(b, p);
          g[b].eb(a, p);
     }

     int ans = 0;
     for(int i = 0; i < q; i++){
          int a, b; cin >> a >> b; a--; b--;
          ans = dijkstra(a, b);
          cout << ans << nl;
     }
     return 0;
}