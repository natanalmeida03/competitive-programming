//https://moj.naquadah.com.br/new/treino/problem/?id=eda2-problems.estradas-faltantes
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

int MAX = 3007;
vector<vector<int>> g(MAX);

int main() { _

   int n, m; cin >> n >> m;
   for(int i = 0; i < m; i++){
      int a, b; cin >> a >> b; a--; b--;
      if(a < b) g[a].eb(b);
      else g[b].eb(a);
   }

   ll ans = 0;

   for(int i = 0; i < n; i++)
      ans += (n-i-1)-g[i].size();

   cout << ans << endl;

   return 0;
}