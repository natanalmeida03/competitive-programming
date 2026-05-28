#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define f first
#define s second

#define MAX 100007

vector<int> color (MAX);
vector<vector<int>> g(MAX);

vector<int> vis (MAX, 0);

set<int> dfs(int a, set<int> ct){
   vis[a] = 1;
   ct.insert(color[a]);
   
   if(a == 1) return ct;

   for(auto &c : g[a]){
      if(!vis[c]){
         set<int> temp = ct;
         temp.insert(color[c]);
         return dfs(c, temp);
      }
   }

   return ct;
}

int main() { _

   int n, q; cin >> n >> q;
   for(int i = 0; i < n; i++){
      int c; cin >> c;
      color[i] = c;
   }

   for(int i = 0; i < n-1; i++){
      int a, b; cin >> a >> b; a--; b--;
      g[a].eb(b);
      g[b].eb(a);
   }

   for(int i = 0; i < q; i++){
      int a; cin >> a; a--;
      set<int> ans = dfs(a, ans);
      cout << ans.size() << endl;
   }

   return 0;
}