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
vector<ll> d(MAX, LINF);

void dijkstra(int u){
     priority_queue <pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
     q.push({0,u});
     d[u] = 0;

     while(!q.empty()){
          auto [dist, v] = q.top();
          q.pop();

          if(dist != d[v]) continue;

          for(auto [x, y]: g[v]){
               if(d[v] + y < d[x]){
                    d[x] = d[v] + y;
                    q.push({d[x], x});
               }
          }
     }
}

int main() { _
     int n, m; cin >> n >> m;

     for(int i = 0; i < m; i++){
          int a, b, p; cin >> a >> b >> p; a--; b--;
          g[a].eb(b, p);
     }

     dijkstra(0);

     for(int i = 0; i < n; i++)
          cout << d[i] << " ";

     cout << nl;
     return 0;
}