#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define f first
#define s second

const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 200'000+10;

vector<vector<int>> g(MAX);
bool vis[MAX];
int k;

vector<int> dfs(int x){
     stack<int> s;
     s.push(x);
     vis[x] = 1;

     vector<int> ans;
     int u = 0;
     while(!s.empty()){
          auto v = s.top();
          s.pop();

          ans.pb(v);

          if(u == 1 and v == x)
               break;
          for(auto &w : g[v]){
               if(!vis[w]){
                    s.push(w);
                    vis[v] = 1;
               }
               else{
                    ans.pop_back();
               }
          }

          u = 1;
     }

     return ans;
}

vector<int> bfs(int x){
     queue<int> q;
     q.push(x);
     vis[x] = 1;

     vector<int> ans = {x};
     while(!q.empty()){
          auto v = q.front();
          q.pop();

          if(v == x)
               break;

          for(auto u : g[v]){
               if(!vis[u]){
                    q.push(u);
                    vis[u] = 1;
                    ans.pb(u);
               }
          }
          
     }

     return ans;

}

int main() { _
     int n, m; cin >> n >> m;

     for(int i = 0; i < m; i++){
          int a, b; cin >> a >> b; a--; b--;
          g[a].pb(b);
          g[b].pb(a);
     }

     vector<int> ans;
     for(int i = 1; i < n; i++){
          ans.pb(i);
          k = i;
          // ans = bfs(i);
          ans = dfs(i);
          memset(vis, false, sizeof vis);

          if(ans.size() >= 4){
               cout << i << endl;
               cout << ans.size() << endl;
               for(auto &c : ans)
                    cout << c + 1 << " ";

               cout << endl;

               return 0;
          }

          ans.clear();
     }

     cout << "IMPOSSIBLE" << endl;
     return 0;
}